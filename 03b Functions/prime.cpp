#include<iostream>
using namespace std;

int isPrime(int a){
  for(int i=2;i<a;i++){
    if(a%i==0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int n;
  cin>>n;
  if(isPrime(n)){
    cout<<"Prime number"<<endl;
  }
  else{
    cout<<"Not a prime numner"<<endl;
  }
 }