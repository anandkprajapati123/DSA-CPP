#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=1;i<n;i++){
    // bool isSorted=false; // if array is already sorted
    for(int j=0;j<n-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        // isSorted=true;
      }
    }
    // if(isSorted==false)
    //   break;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
