#include<iostream>
using namespace std;

void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}

void swapAlternate(int arr[],int n){
  for(int i=0;i<n;i+=2){
    if(i+1<n){
      // swap(arr[i],arr[i+1]);
      int temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
  }
}

int main(){
  int even[6]={2,3,6,5,7,8};
  int odd[5]={2,3,6,5,7};
 
  swapAlternate(even,6);
  printArray(even,6);

  swapAlternate(odd,5);
  printArray(odd,5);
  return 0;
}