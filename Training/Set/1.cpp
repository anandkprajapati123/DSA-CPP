#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n = 11;
  set<int> s = {10, 2, 3, 4, 2, 5, 6, 4, 2, 3, 6};
  for (int num : s)
  {
    cout << num << " ";
  }
  cout << endl;
  cout << s.size() << endl;

  return 0;
}