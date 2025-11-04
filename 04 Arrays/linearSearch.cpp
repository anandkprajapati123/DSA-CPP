#include<iostream>
using namespace std;

bool search(int arr[],int n, int element){
  for(int i=0;i<n;i++){
    if(arr[i]==element){
      return 1;
    }
  }
  return 0;
}

int main(){
  int arr[5]={1,2,5,4,3};
  cout<<"enter the element"<<endl;
  int element;
  cin>>element;
  bool found=search(arr,5,element);
  if(found){
    cout<<"Element is Present"<<endl;
  }else{
    cout<<"Not present"<<endl;
  }
}