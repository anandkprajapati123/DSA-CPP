#include <iostream>
using namespace std;

// pass by value and value of n is not change
void update(int n)
{
  n++;
}

// pass by reference and value of n is change
void update2(int &n)
{
  n++;
}

int &func(int a)
{
  int num = a;
  int &ans = num;
  return ans;
}

int *fun(int n)
{
  int *ptr = &n;
  return ptr;
}

int main()
{
  /*
  int i = 5;

  // create a reference variable
  int &j = i;

  cout << i << endl;
  i++;
  cout << i << endl;
  j++;
  cout << i << endl;
  cout << j << endl;
  */

  int n = 5;
  cout << "Before " << n << endl;
  update2(n);
  cout << "After " << n << endl;

  func(n);
  fun(n);

  return 0;
}