#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int N=7;
  int A[N]={8,-1,3,4,-3,2,1};
  int maxSum=INT_MIN;
  for(int i=0;i<N;i++){
    int sum=0;
      for(int j=i;j<N;j++){
        sum = sum + A[j];
        maxSum=max(maxSum,sum);
      }
  }
  cout<<maxSum<<endl;
}