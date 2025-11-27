#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 4, m = 5, k = 2;
  vector<vector<int>> mat = {{1, 2, 3, 4, 5},
                             {5, 6, 7, 8, 9},
                             {9, 10, 11, 12, 13},
                             {13, 14, 15, 16, 17}};
  for (int i = 0; i < n / 2; i++)
  {
    for (int j = 0; j < k; j++)
    {
      swap(mat[i][m + j - k], mat[n - 1 - i][j]);
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