#include <iostream>
using namespace std;

int score = 10;

void a(int &i)
{
  cout << score << " in a" << endl;
  score++;
  cout << i << endl;
}

void b(int &i)
{
  cout << score << " in b" << endl;
  cout << i << endl;
}

int main()
{
  cout << score << " is main" << endl;
  int i = 5;
  a(i);
  b(i);

  return 0;
}