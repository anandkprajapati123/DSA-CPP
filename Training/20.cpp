#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int target=5;
  int n=7;
  int arr[n]={8,-1,3,4,-3,2,1};
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j]==target){
        cout<<arr[i]<<" "<<arr[j]<<endl;
      }
    }
  }
}