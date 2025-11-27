#include<iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int n=s.length();
  int l=0,r=n-1;
  while(l<=r){
    if(isalpha(s[l]) && isalpha(s[r])){
      swap(s[l],s[r]);
      l++; r--;
    }
    else if(!isalpha(s[l])){
      l++;
    }
    else{
      r--;
    }
  }
  cout<<s<<endl;
  return 0;
}
