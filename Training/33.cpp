#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  cout << s.substr(n - k, k) + s.substr(0, n - k);
}