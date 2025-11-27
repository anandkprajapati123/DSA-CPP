#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  // for substring
  // substr(position,length);

  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  cout << s.substr(k,n-2*k) << endl;
}