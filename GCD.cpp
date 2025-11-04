#include <iostream>
using namespace std;

int gcd(int a, int b){
  if(b==0) return a;
  if(a==0) return b;
  while(a != b){
    if(a>b){
      a=a-b;
    }
    else{
      b=a-b;
    }
  }
  return a;
}

int main(){
  int a,b;
  cout<<"Enter two numbers: ";
  cin >> a >> b;
  int ans=gcd(a,b);
  cout<<"The GCD of "<<a<<" & "<<b<<" is: "<<ans<<endl;

  return 10;
}