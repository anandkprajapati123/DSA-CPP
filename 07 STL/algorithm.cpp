#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);

  cout << binary_search(v.begin(), v.end(), 6) << endl;

  cout << "lower bound " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
  cout << "upper bound " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

  int a = 3;
  int b = 5;
  cout << "max of a,b " << max(a, b) << endl;
  ;
  cout << "min of a,b " << min(a, b) << endl;
  ;
  swap(a, b);
  cout << a << "," << b << endl;

  string str = "anand";
  reverse(str.begin(), str.end());
  cout << str << endl;

  cout << "after rotate" << endl;
  rotate(v.begin(), v.begin() + 1, v.end());
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  sort(v.begin(), v.end(), greater<int>());
  for (int i : v)
  {
    cout << i << " ";
  }
}