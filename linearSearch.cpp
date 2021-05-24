#include<iostream>
using namespace std;
int search(int *A, int number, int size){
 for(int i=0; i<size; ++i){

 //the return 1 and 0 are exit status of the program
 //where 0==successful  &&  1==failed
 if(A[i]==number) return 0;
 //notice there is no else used here bcz if we put an "else" here it will not allow us to search the whole array
  // the abscence of "else" is saying "continue till the last element is reached or the desired element is found
 }
 //we've placed the return 1 after the for loop so that we can iterate and search the whole array successfully
 return 1;
}


int main(void){
int n;
int Array[]={7,5,4,1,2};
int size=sizeof(Array)/sizeof(Array[0]);
cout<<"enter the number to search: ";
cin>>n;
if(search(Array, n, size)==0)
cout<<"voila we found you";
else
cout<<"sorry you were not there";


}

