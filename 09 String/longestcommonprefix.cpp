#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string LongestCommonPrefix(vector<string> &str){

  // keeping first string as const and comparing with all other strings
  string s1=str[0];
  int ans_length=s1.size();

  for(int i=0;i<str.size();i++){
    int j=0;
    while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j]){ // finding the common string length
      j++;
    }
    ans_length=min(ans_length,j); // updating length of ans string
  }
  return s1.substr(0,ans_length);
}

int main(){
  int n;
  cout<<"Enter string : ";
  cin>>n;
  cout<<"Enter strings: ";
  vector<string> str(n);
  for(int i=0;i<n;i++){
    cin>>str[i];
  }
  cout<<"Logest common prefix is : "<<LongestCommonPrefix(str)<<endl;
}