#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
  int m=7;
  vector<vector<int>> mat={{1,1,1,1,1,1,1},
                           {2,2,2,2,2,2,2,},
                           {3,3,3,3,3,3,3},
                           {4,4,4,4,4,4,4},
                           {5,5,5,5,5,5,5},
                           {6,6,6,6,6,6,6}};
  for(int i=1;i<n-2;i++){
    for(int j=1;j<m-2;j++){
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }

  // OR

  for(int i=1;i<n-2;i++){
    vector<int> row;
    for(int j=1;j<m-2;j++){
      row.push_back(mat[i][j]);
    }
    mat.push_back(row);
  }
  for(auto row:mat){
    for(int num : row){
      cout<<num<<" ";
    }
    cout<<endl;
  }
}