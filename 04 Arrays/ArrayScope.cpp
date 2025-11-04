#include <iostream>
using namespace std;

void update(int arr[], int n){
  cout<<"inside the function"<<endl;
  arr[0]=120;
  for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
  } cout<<endl;
}

int main(){
  int arr[4]={2,3,6,5};
  update(arr,4);
  for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
  } cout<<endl;
  return 0;
}