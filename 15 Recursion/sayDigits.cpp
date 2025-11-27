#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sayDigit(int n, string arr[])
{
  // base case
  if (n == 0)
    return;

  int d = n % 10;
  n /= 10;
  
  // recursive call
  sayDigit(n, arr);
  cout << arr[d] << " ";
}

int main()
{
  string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
  int n;
  cin >> n;
  cout << endl;
  sayDigit(n, arr);
  cout << endl;

  return 0;
}