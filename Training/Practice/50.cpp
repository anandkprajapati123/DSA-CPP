#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++)
  {
    string s = v[i];
    int cnt = 0;
    for (char c : s)
    {
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
      {
        cnt++;
      }
    }
    if(cnt == 0)
    {
      cout << s;
    }
  }

  return 0;
}