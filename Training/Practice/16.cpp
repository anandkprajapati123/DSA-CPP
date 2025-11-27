#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){


    // Access & uodate
  // int first = arr[i];
  // nums[i]=val;

  // Count of element
  // int freq=count(arr,arr+n,element);

  // Location of element
  // int index=find(arr,arr+n,element)-arr;

  // Array equality
  // bool ans=equal(arr1,arr1+len,arr2);

  // Reverse Array
  // reverse(nums,nums+len); // in place reverse(an algorithm can execute without taking an axiliary space is called inplace algorithm)


    // Swap
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++){
      cin >> arr[i];
  }
  for(int i=0;i<n;i+=2*k){
      for(int j=0;j<k;j++){
          swap(arr[i+j], arr[i+j+k]);
      }
  }
  for(int i=0;i<n;i++){
      cout << arr[i] << " ";
  }
  cout << endl;
}