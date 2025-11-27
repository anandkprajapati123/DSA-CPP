// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n,m;
//   cin>>n>>m;
//   set<int> set1;
//   for (int i = 0; i < m; i++)
//   {
//     int x;
//     cin >> x;
//     set1.insert(x);
//   }
//   set<int> set2;
//   for (int i = 0; i < m; i++)
//   {
//     int x;
//     cin >> x;
//     set2.insert(x);
//   }
//   set<int> set3;
//   for (int i = 0; i < m; i++)
//   {
//     int x;
//     cin >> x;
//     set3.insert(x);
//   }
//   set<int> set4;
//   set<int> common;
//   set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(set4, set4.begin()));
//   set_intersection(set4.begin(), set4.end(), set3.begin(), set3.end(), inserter(common, common.begin()));

//   for (int num : common)
//   {
//     cout << num << " ";
//   }

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> v[i][j];
    }
  }
  set<int> s1;
  for (int i = 0; i < 1; i++)
  {
    for (int j = 0; j < m; j++)
    {
      s1.insert(v[i][j]);
    }
  }
  for (int i = 1; i < n; i++)
  {
    set<int> intersect;
    set<int> s2;
    for (int j = 0; j < m; j++)
    {
      s2.insert(v[i][j]);
    }
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(intersect, intersect.begin()));
    s1 = intersect;
  }
  for (int x : s1)
  {
    cout << x << " ";
  }

  return 0;
}