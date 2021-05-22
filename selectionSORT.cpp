#include<iostream>
using namespace std;
//swap function
void swap(int *x, int *y){
  int temp=*x;
  *x=*y;
  *y=temp;
}
//function for the selection sort
void selectionSort(int *A, int n){
  int smallest;
  for(int i=0; i<n; ++i){
    smallest=i;
    ///starting the second loop with i+1
    ///so to take care of sorted areas((((i.e it will search for the next unsorted numbers
    ///rather than dwelling on the previously sorted numbers))))
    ///and not to bother them
    for(int j=i+1; j<n; ++j){
      if(A[j] < A[smallest]){
        smallest=j;
      }
      swap(A[smallest],A[i]);
    }
  }
}

int main(){
  int A[]={8,7,6,5,4,3,2,1};
  int n=sizeof(A)/sizeof(A[0]);
  selectionSort(A,n);
  for(auto i: A) cout<<i<<" ";
  return 0;
}
