#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int counting(int n)
{
  if (n == 0)
    return 1;

  // cout << n << endl;
  // recursive relation
  counting(n - 1);
  cout << n << endl;
}

int main()
{
  int n;
  cin >> n;
  counting(n);

  return 0;
}