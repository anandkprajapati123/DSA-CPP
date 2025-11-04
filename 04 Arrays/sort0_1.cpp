#include<iostream>
using namespace std;

void printArray(int arr[],int n){
  for(int i=0;i<8;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}

int sort(int arr[],int n){
  int left=0;
  int right=n-1;
  while(left<right){
    while(arr[left]==0){
      left++;
    }
    while(arr[right]==1){
      right--;
    }
    if(left<right){
      swap(arr[left],arr[right]);          
      left++;
      right--;
    } 
  }
}

int main(){
  int arr[8]={1,1,0,0,0,0,1,0};
  sort(arr,8);
  printArray(arr,8);
}