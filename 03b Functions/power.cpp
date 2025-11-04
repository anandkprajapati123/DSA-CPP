#include<iostream>
using namespace std;

int power(){
  int n1,n2;
  cin>>n1>>n2;
  int ans=1;
  for(int i=1;i<=n2;i++){
    ans=ans*n1;
  }
  return ans;
}

int main(){
  // int a,b;
  // cin>>a>>b;
  // int answer=power(a,b);
  // cout<<"answer is : "<<answer<<endl;

  int answer=power();
  cout<<"answer is : "<<answer<<endl;
  int answer1=power();
  cout<<"answer is : "<<answer1<<endl;
  return 0;
}