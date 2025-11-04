#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    // print the count of elements from A, which is greater than B[j]
  int N=5;
  int M=7;
  int A[N]={2,6,1,3,9};
  int B[M]={5,1,8,7,0,4,12};
  for(int i=0;i<M;i++){
    int count=0;
    for(int j=0;j<N;j++){
      if(B[i]<A[j]){
        count++;
      }
    }
    cout<<count<<" ";
  }
}