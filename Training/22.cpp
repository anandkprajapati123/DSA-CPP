#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n=5;vector<int> a={1,5,2,3,1};
  int max=*max_element(a.begin(),a.end());
  int min=*min_element(a.begin(),a.end());
  cout<<(max-min)<<endl;
}