#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  // char c=7;
  // if(isdigit(c));
  // if(isalpha(c));

  int n = 15;
  string s = "abc12AD34@###123";
  string str1 = "";
  string str2 = "";
  for (int i = 0; i < s.size(); i++)
  {
    if (isalpha(s[i]))
    {
      str1 += tolower(s[i]);
    }
    else if (isdigit(s[i]))
    {
      str1 += s[i];
    }
    else
    {
      str2 += s[i];
    }
  }
  string s3 = str1 + str2;
  cout << s3 << endl;
}