#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n=3;
  int m=5;
  vector<vector<int>> A={{12,4,7,9,2},{1,5,8,3,13},{2,42,1,6,9}};
  for(int i=0;i<3;i++){
    int sum=0;
    int maxVal=INT_MIN;
    int minVal=INT_MAX;
    for(int j=0;j<5;j++){
      sum=sum+A[i][j];
      maxVal=max(A[i][j],maxVal);
      minVal=min(A[i][j],minVal);
    }
    cout<<sum<<" "<<maxVal<<" "<<minVal<<endl;
  }
}