#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

  // left rotation = s.substr(0,k)+s.substr(k,n-k);
  // right rotation = s.substr(n-k,k)+s.substr(0,n-k);

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  cout << s.substr(k) + s.substr(0, k);
  // cout << s.substr(k) + s.substr(k, n - k);
  
}