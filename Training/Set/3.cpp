#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int m = 4, n = 6;
  set<int> s1 = {1,3,5,7};
  set<int> s2 = {5,7,6,8,9,10};
  set<int> set1;
  set<int> set2;
  set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
  set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(set2, set2.begin()));
  cout << set1.size() <<" "<< set2.size() << endl;
  cout << set1.size() * set2.size() << endl;

  return 0;
}