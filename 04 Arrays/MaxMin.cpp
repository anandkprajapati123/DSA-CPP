#include<iostream>
using namespace std;

int Max(int num[], int n){
  int max = num[0];
  for(int i=0;i<n;i++){
    if(num[i]>max){
      max=num[i];
    }
  }
  return max;
}

int Min(int num[], int n){
  int min = num[0];
  for(int i=0;i<n;i++){
    if(num[i]<min){
      min=num[i];
    }
  }
  return min;
}

int main(){
  int n;
  cin>>n;
  int num[n];
  for(int i=0;i<n;i++){
    cin>>num[i];
  }
  cout<<"Maximum value is "<<Max(num,n)<<endl;
  cout<<"Minimum value is "<<Min(num,n)<<endl;
}