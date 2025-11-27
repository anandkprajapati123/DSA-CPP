#include <iostream>
using namespace std;
int main()
{
  string s, r;
  cin >> s >> r;
  int j = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == r[j])
    {
      s[i] = s[i - 1];
      j++;
    }
  }
  cout << s << endl;

  return 0;
}