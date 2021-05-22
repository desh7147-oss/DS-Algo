#include<iostream>
using namespace std;

//function for binary search
int search(int arr,int n, int x){
int left=0,right=n-1;
while(left<=right){
 int mid=(left+right)/2;
 if(x > arr[mid])
  left=mid+1;

 else if(arr[mid]==x) return mid;

 else
  right=mid-1;

}

return -1;
}

int main(){
int a[]={1,2,6,9,89,900,6789,45678,88888};
int n=sizeof(a)/sizeof(a[0]);
int xy= search(arr,n,9);
cout<<"yeah we found your number at the index "<<xy;
else cout<<"soorrryyyy unable to find your target";
return 0;


}
