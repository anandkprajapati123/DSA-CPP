#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){


  // sum of static array
  // accumulate(arr_name,arr_name+length,initial_sum);
  // int arr[7]={1,2,3,4,5,6,7};
  // cout<<accumulate(arr,arr+7,0)<<endl;
  // cout<<accumulate(arr,arr+3,0)<<endl;
  // cout<<accumulate(arr+1,arr+3,0)<<endl;


   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int m;
       cin>>m;
       int arr[5];
       for(int j=0;j<m;j++){
           cin>>arr[j];
       }
      //  int sum=0;
      //  for(int j=0;j<m;j++){
      //      sum =sum+arr[j];
      //  }
      //  cout<<sum<<endl;
        cout<<accumulate(arr,arr+m,0)<<endl;
      }
}