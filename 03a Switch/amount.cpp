#include<iostream>
using namespace std;
int main(){
  int n,a,b,c,d;
  cout<<"Enter amount: ";
  cin>>n;
  switch(1){
    case 1:a=(n/100);
    cout<<"number of 100 notes is:"<<a<<endl;
    case 2:b=((n-(a*100))/50);
    cout<<"number of 50 notes is: "<<b<<endl;
    case 3:c=((n-(a*100)-(b*50))/20);
    cout<<"number of 20 notes is: "<<c<<endl;
    case 4:d=((n-(a*100)-(b*50)-(c*20))/1);
    cout<<"number of 1 notes is: "<<d<<endl;
  }
 }