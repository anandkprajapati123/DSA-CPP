#include<iostream>
using namespace std;
int main()
{
  string s="quickfoxjumps";
  string str="";
  string str2="";
  for(int i=0;i<s.size();i++){
    if((i+1)%4==0 || (i+1)%6==0){
      str+=s[i];
    }
    else{
      str2+=s[i];
    }
  }
  cout<<str2+str<<endl;

  return 0;
}