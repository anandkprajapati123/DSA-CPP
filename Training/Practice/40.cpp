#include <iostream>
#include <cmath>
using namespace std;

void armstrong(int n, int m)
{
  for (int i = n; i <= m; i++)
  {
    int temp = i;
    int digit = 0;

    int p = i;
    while (p > 0)
    {
      digit++;
      p /= 10;
    }

    int sum = 0;
    p = i;
    while (p > 0)
    {
      int d = p % 10;
      sum += pow(d, digit);
      p /= 10;
    }

    if (sum == i)
    {
      cout << i << " ";
    }
  }
}

int main()
{
  int n, m;
  cout << "Enter n and m: " << endl;
  cin >> n >> m;
  armstrong(n, m);
  return 0;
}
