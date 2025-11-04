#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n = 10;
  string s ="quickquick";
  string str=s;
  reverse(s.begin(), s.end());
  if (s == str)
  {
    cout << "true" << endl;
  }
  else
  {
    cout << "False" << endl;
  }
}