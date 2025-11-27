#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int n){
  // base case
  if(n==0 || n==1)
    return true;
  if(arr[0]>arr[1])
    return false;
  else
    return isSorted(arr+1,n-1);

}

int main()
{
  int arr[5]={2,4,6,8,9};
  int n=5;
  bool ans=isSorted(arr,n);
  if(ans)
    cout<<"array is sorted"<<endl;
    else
      cout<<"array is not sorted"<<endl;


  return 0;
}