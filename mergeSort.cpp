#include<iostream>
using namespace std;

 void merge(int *A, int left, int right, int mid){
     int n1 = (mid- left) +1;//size of the temporary array left
     int n2 =right - mid;//size of the temporary array right

     // sub-arrays(temporary arrays)
     int L [n1],R [n2];

     //copying to the subarrays
     for(int i = 0; i < n1; ++i){
         //left will always be the starting of the array
         //it will not be changed for a single array
         L[i] = A[left + i];
     }

     for(int i = 0; i < n2; ++i){
         //the second(R) subarray will start from the (mid+1)th index
         //again it will not change for a single array
         //bcz this is the starting of the array
         R[i] = A[mid + 1 + i];
     }

     int i = 0,j = 0; //indexes for the Left and right subarray
     int k = left;  //since left will be the starting of our array(currently passed)

     //logic for the merge and compare
     while(i < n1 && j < n2){
         if(L[i] <= R[j]){
             A[k] = L[i];
             ++i;

         }
         else{
             A[k] = R[j];
             ++j;

         }
         ++k;

     }

     //one array will exhaust and one will have some items uncopied
     while(i < n1){
         A[k] = L[i];
         ++i;
         ++k;
     }

     while(j < n2){
         A[k] = R[j];
         ++j;
         ++k;
     }


 }

 void mergeSort(int *A, int left, int right){
     if(left >= right) return; //base case

     int mid = (left + right) /2;
     mergeSort(A, left, mid); //call for the left half
     mergeSort(A, mid+1, right);//call for the right half
     merge(A, left, right, mid);// merge them

 }

 //function main()

 int main(){
     int A[] = {0,8,7,6,5,4,3,-999,2,1,-858,0001,231,254,212};
     int n = sizeof(A) / sizeof( A[0] );
     cout<<"the unsorted array was: "<<"\n";
     for( auto i : A) cout<<i<<" ";
     cout<<"\n";
     std::cout<<"The sorted array is: "<<"\n";
     mergeSort(A, 0, n);
     for( auto i : A) std::cout<< i << " ";
     std::cout<<"\n";
     return 0;
 }
