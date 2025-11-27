#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int s, int e)
{
  for (int i = s; i <= e; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

bool binarySearch(int *arr, int s, int e, int key)
{
  print(arr, s, e);
  // base case
  if (s > e) // element not found
    return false;

  int mid = (s + e) / 2;
  cout << "value of mid is " << arr[mid] << endl;

  if (arr[mid] == key) // element found
    return true;

  if (arr[mid] < key)
  {
    binarySearch(arr, mid + 1, e, key);
  }
  else
  {
    binarySearch(arr, s, mid - 1, key);
  }
}

int main()
{
  int arr[11] = {2, 4, 6, 10, 14, 18, 22, 38, 49, 55, 222};
  int n = 11;
  int key = 2222;
  cout << "present or not: " << binarySearch(arr, 0, 10, key) << endl;

  return 0;
}