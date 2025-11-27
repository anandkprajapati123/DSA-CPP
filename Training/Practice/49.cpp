#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s; cin>>s;
  int mid=s.length()/2;
  string s1=s.substr(0,mid);
  string s2=s.substr(mid+1);
  string str=s1+s2;
  s=str;
  reverse(str.begin(),str.end());
  if(str==s){
    cout<<"True"<<endl;
  }
  else{
    cout<<"False"<<endl;
  }


  return 0;
}