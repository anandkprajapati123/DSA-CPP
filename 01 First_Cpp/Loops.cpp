#include <iostream>
using namespace std;
int main() {
  // int a,b;
  // a=cin.get();
  // cout<<a<<endl;
  // cin>>b;
  // cout<<b<<endl;

  // char ch;
  // cin>>ch;
  // if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
  //   cout<<"Vowel"<<endl;
  // }
  // else{
  //   cout<<"Consonant"<<endl;
  // }

  // int n;
  // cin>>n;
  // int i=1;
  // while(i<=n){
  //   cout<<i<<+" ";
  //   i++;
  // }

  // int n;
  // cin>>n;
  // int sum=0;
  // int i=1;
  // while(i<=n){
  //   if(i%2==0){
  //     sum=sum+i;
  //     i++;
  //   }
  //   else{
  //     i++;
  //   }
  // }
  // cout<<sum<<endl;

  // Prime number
  int n;
  cin>>n;
  int i=2;
  while(i<n){
    if(n%i==0){
      cout<<"Not Prime"<<endl;
    }
    else{
      cout<<"Prime"<<endl;
    }
    i++;
  }


}