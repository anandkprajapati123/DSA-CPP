// #include<iostream>
// using namespace std;

// int digitSum(int n,int k){
//   if(n<10){
//     return n;
//   }
//   int sum=0;
//   while(n>0){
//     int d=n%10;
//     sum +=d;
//     n /=10;
//   }
//   sum *=k;
//   digitSum(sum,1);
// }

// int main(){
//   int n = 9875;
//   int k = 4;
//   cout<<"sum is: "<<digitSum(n,k)<<endl;
// }

// OR

#include <iostream>
using namespace std;
int main()
{
  int n = 987;
  int k = 8;
  int num = n * k;
  if (num == 0)
  {
    cout << 0;
  }
  else if (num % 9 == 0)
  {
    cout << 9;
  }
  else
  {
    cout << num % 9;
  }
}