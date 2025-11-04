#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n1 = 5, n2 = 4, k = 3;
  string s1 = "abcde";
  string s2 = "abcd";
  string str1 = s1.substr(n1 - k, k) + s1.substr(0, n1 - k);
  string str2 = s2.substr(k, n2) + s2.substr(0, k);
  string s3 = str1 + str2;
  string rev = s3;
  reverse(s3.begin(), s3.end());
  if (rev == s3)
  {
    cout << rev << " " << "True" << endl;
  }
  else
  {
    cout << rev << " " << "False" << endl;
  }
}
