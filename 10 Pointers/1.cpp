#include <iostream>
using namespace std;
int main()
{
  // int num = 5;
  // cout << num << endl;
  // cout << "Address of num is: " << num << endl;

  // Address of operator
  // int *p = &num;
  // cout << "Address of num is: " << p << endl;
  // cout << "Address of num is: " << *p << endl;
  // cout << "Address of num is: " << &p << endl;

  // double d=3.3;
  // double *p2=&d;
  // cout << "Address of d is: " << p2 << endl;
  // cout << "Address of d is: " << *p2 << endl;

  // cout << "size of integer is: " << sizeof(num) << endl;
  // cout << "size of pointer is: " << sizeof(p) << endl;
  // cout << "size of pointer p2 is: " << sizeof(p2) << endl;

  // pointer to int is created, and pointing to some garbage value
  // int i=5;
  // int *q=&i;
  // // int *p3 = nullptr;
  // cout << q << endl;
  // cout << *q << endl;

  // int *p=0;
  // p=&i;
  // cout << p << endl;
  // cout << *p << endl;

  // int num = 5;
  // int a = num;
  // cout << num << endl;
  // a++;
  // cout << num << endl;

  // int *p = &num;
  // cout << *p << endl;
  // (*p)++;
  // cout << *p << endl;

  // copying a pointer
  // int *q = p;
  // cout << p << " - " << q << endl;
  // cout << *p << " - " << *q << endl;

  // int i = 3;
  // int *t = &i;
  // *t = *t + 1;
  // cout << *t << endl;
  // cout << t << endl;
  // t = t + 1;
  // cout << t << endl;


int a = 7;
int *c = &a;
c = c + 3;
cout<< c << endl;


  return 0;
}