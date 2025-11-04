#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n=5;
  int a[n]={4,2,6,4,5};
  for(int i=0;i<n;i++){
    int max=a[i];
    int cnt=0;
    for(int j=i+1;j<n;j++){
      if(a[j]>max){
        cout<<a[j]<<" ";
        cnt++;
        break;
      }
    }
    if(cnt==0){
      cout<<0<<" ";
    }
  }
}