///this is bubble sort
///bubble sort means compare a pair of two adjacent numbers and if they are not sorted
///then sort them and repeat this until the array is sorted
#include<iostream>
using namespace std;
//function for swap
void swap(int *x , int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
//code for function bubble sort
void bubbleSort(int *A, int n){
    int current,next;
    //first for loop is keeping track of the cycles(total cycles)
    for(int i=0; i<=n-1; ++i){
        //the second for loop is to compare the two adjacent elements 
        
        for(int j=0; j<n-1; ++j){
            //if the pair is unsorted then sort it by swapping them
            if(A[j] > A[j+1] ){
                swap(A[j],A[j+1]);
            
                
            }
        }
    }
}

int main(){
    int A[]={8,7,6,5,4,3,2,1};
    int n=sizeof(A)/sizeof(A[0]);
    bubbleSort(A,n);
    for(auto i: A) cout<<i<<" ";
    return 0;
}