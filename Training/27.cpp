#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n = 3, m = 4;
  vector<vector<int>> mat = {{24, 29,12, 33},
                             {25, 36, 18, 17},
                             {31, 22, 43, 67}};

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      swap(mat[i][j], mat[i + 1][j + 1]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
}