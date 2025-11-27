#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
  vector<int> nums = {3,3,4,2,4,4,2,4};
  map<int, int> mp;

  for (int i = 0; i < nums.size(); i++)
  {
    mp[nums[i]]++;
  }

  for (auto itr : mp)
  {
    if (itr.second > (nums.size() / 2))
    {
      cout << itr.first << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}