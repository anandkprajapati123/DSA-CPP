#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

   // Adding element
  // vector <int> vec={10,20,30,40,50}
  // vec.insert(vec.begin()+2,60);

  // location
  // auto idx=find(vec.begin(),vec.end(),20);

  // slicing of a vector
  // vector <int> vec;
  // vec.assign(vec.begin()+from_idx,vec.end()+to_idx)

  int n = 11;
  vector<int> vec = {4, 2, 9, 3, 5, 8, 1, 7, 9, 6, 4};
  int max_idx;
  int min_idx;
  int max = *max_element(vec.begin(), vec.end());
  max_idx = find(vec.begin(), vec.end(), max) - vec.begin();
  int min = *min_element(vec.begin(), vec.end());
  min_idx = find(vec.begin(), vec.end(), min) - vec.begin();

  vector<int> ans;
  if (min_idx < max_idx)
  {
    for (int i = min_idx; i < max_idx; i++)
    {
      ans.push_back(vec[i]);
    }
    for (int j = 0; j < min_idx; j++)
    {
      ans.push_back(vec[j]);
    }
    for (int k = max_idx; k < n; k++)
    {
      ans.push_back(vec[k]);
    }
  }
  else
  {
    for (int i = max_idx; i < min_idx; i++)
    {
      ans.push_back(vec[i]);
    }
    for (int j = 0; j < max_idx; j++)
    {
      ans.push_back(vec[j]);
    }
    for (int k = min_idx; k < n; k++)
    {
      ans.push_back(vec[k]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}