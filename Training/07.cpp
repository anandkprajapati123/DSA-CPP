#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,x;
  cin>>n>>x;
  int res=(n*x)/10000;
  if(res<=9){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}