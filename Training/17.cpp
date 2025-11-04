#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

  
  // vector<int> vec={10,20,20,50};
  // int freq=count(vec.begin(),vec.end(),20)
  // vec.erase(vec.begin()+2)

  int n;
  cin>>n;
  vector <int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int freq=count(arr.begin(),arr.end(),1);
  // cout<<freq;
  arr.erase(arr.begin()+freq);
  for(int i=0;i<n-1;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}