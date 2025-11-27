#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPallindrome(string str, int i, int j)
{
  if (i > j)
    return true;

  if (str[i] != str[j])
  {
    return false;
  }
  else
  {
    return checkPallindrome(str, i + 1, j - 1);
  }
}

int main()
{
  string name = "bookkoob";
  cout << endl;
  bool isPallindrome = checkPallindrome(name, 0, name.length() - 1);

  if (isPallindrome)
  {
    cout << "pallindrome" << endl;
  }
  else
  {
    cout << "not a pallindrome" << endl;
  }

  return 0;
}