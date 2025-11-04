#include <iostream>
using namespace std;
int main()
{
  /*
  int arr[10] = {23, 122, 41, 67};
  cout << "address of first memory block is: " << arr << endl;
  cout << "address of first memory block is: " << &arr[0] << endl;
  
  cout << "Value at 0th index: " << arr[0] << endl;
  cout << "Value at oth index: " << *arr << endl;
  
  cout << *arr + 1 << endl;
  cout << *(arr) + 1 << endl;
  
  cout << *(arr + 1) << endl;
  
  cout << arr[2] << endl;
  // OR
  cout << 2[arr] << endl;
  // OR
  cout << *(arr + 2) << endl;
  // OR
  cout << *(2 + arr) << endl;
  // OR
  int i=2;
  cout << i[arr] << endl;
  


  int temp[10]={1,2};
  cout<<sizeof(temp)<<endl;
  cout<<sizeof(*temp)<<endl;
  cout<<sizeof(&temp)<<endl;
  
  int *ptr=&temp[0];
  cout<<sizeof(ptr)<<endl;
  cout<<sizeof(*ptr)<<endl;
  cout<<sizeof(&ptr)<<endl;
  
  
  int a[20] = {1, 2, 3, 5};
  cout << a << endl;
  cout << &a << endl;
  cout << &a[0] << endl;
  
  int *p = &a[0];
  cout << p << endl;
  cout << *p << endl;
  cout << &p << endl;
  */


  int arr[10];
  // arr=arr+1; // Error
  int *ptr = &arr[0];
  cout << ptr << endl;
  ptr = ptr + 1; // Valid
  cout << ptr << endl;

  return 0;
}
