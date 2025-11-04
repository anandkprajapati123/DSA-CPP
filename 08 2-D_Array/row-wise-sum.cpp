#include <iostream>
#include <climits>
using namespace std;

// to print row-wise sum
void printSum(int arr[][3], int row, int col){
  cout<<"Printing the sum "<<endl;
  for(int row=0; row<3; row++){
    int sum=0;
    for(int col=0; col<3; col++){
      sum +=arr[row][col];
    }
    cout<<sum<<" ";
  }
  cout<<endl;
}

// to print col-wise sum
// void printSum(int arr[][3], int row, int col){
//   cout<<"Printing the sum "<<endl;
//   for(int col=0; col<3; col++){
//     int sum=0;
//     for(int row=0; row<3; row++){
//       sum +=arr[row][col];
//     }
//     cout<<sum<<" ";
//   }
//   cout<<endl;
// }

int largestSum(int arr[][3], int row, int col){
  int maxi =  INT_MIN;
  int rowindex = -1;

  for(int row=0; row<3; row++){
    int sum=0;
    for(int col=0; col<3; col++){
      sum +=arr[row][col];
    }
    if(sum>maxi){
      maxi=sum;
      rowindex=row;
    }
  }
  cout<<"The maximum sum is "<<maxi<<endl;
  return rowindex;

}

int main(){
  int arr[3][3];
  cout<<"enter the element: "<<endl;
  for(int row=0; row<3; row++){
    for(int col=0; col<3; col++){
      cin>>arr[row][col];
    }
  }

  cout<<"printing the array"<<endl;
  for(int row=0; row<3; row++){
    for(int col=0; col<3; col++){
      cout<<arr[row][col]<<" ";
    }
    cout<<endl;
  }

  printSum(arr,3,3);
  int ans=largestSum(arr,3,3);
  cout<<"Max row sum is at index "<<ans<<endl;

  return 0;
}