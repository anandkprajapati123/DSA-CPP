#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
  cout << "size of array is " << n << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

bool linearSearch(int arr[], int n, int key)
{
  print(arr, n);
  // base case
  if (n == 0)
    return false;

  if (arr[0] == key)
  {
    return true;
  }
  else
  {
    return linearSearch(arr + 1, n - 1, key);
  }
}

int main()
{
  int arr[5] = {3, 5, 1, 2, 6};
  int n = 5;
  int key = 7;
  bool ans = linearSearch(arr, n, key);
  if (ans)
  {
    cout << "present" << endl;
  }
  else
  {
    cout << "absent" << endl;
  }

  return 0;
}