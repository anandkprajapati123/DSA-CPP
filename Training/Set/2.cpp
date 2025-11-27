#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n=13,m=16;
  string s1="Quickbrownfox";
  string s2="Learnfromlearnys";
  unordered_set<char> mySet1(s1.begin(),s1.end());
  unordered_set<char> mySet2(s2.begin(),s2.end());
  unordered_set<char> res;
  for(char ch:mySet1){
    if(mySet2.find(ch)!=mySet2.end()){
      res.insert(ch);
    }
  }
  cout<<res.size();

  return 0;
}