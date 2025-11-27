#include <iostream>
using namespace std;

void update(int **p2)
{
  // p2 = p2 + 1; // no changing

  // *p2 = *p2 + 1; // changing

  **p2 = **p2 + 1; //changing
}

int main()
{
  int i = 5;
  int *p = &i;
  int **p2 = &p;

  // cout << "double pointer" << endl;
  // cout << "Printing ptr: " << p << endl;
  // cout << "Printing address of ptr: " << &p << endl;
  // cout << *p2 << endl;

  // cout << i << endl;
  // cout << *p << endl;
  // cout << **p2 << endl;

  // cout << &i << endl;
  // cout << p << endl;
  // cout << *p2 << endl;

  // cout << &p << endl;
  // cout << p2 << endl;
  // cout << i << endl;

  cout << endl << endl;
  cout << "Before " << i << endl;
  cout << "Before " << p << endl;
  cout << "Before " << p2 << endl;
  update(p2);
  cout << "After " << i << endl;
  cout << "After " << p << endl;
  cout << "After " << p2 << endl;
  cout << endl << endl;

  return 0;
}