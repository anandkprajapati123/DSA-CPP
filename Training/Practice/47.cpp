#include <iostream>
using namespace std;
int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  int j = 0;
  for (int i = 0; i < s1.size(); i++)
  {
    if(s2.find(s1[i])>s2.size()){
      cout<<s1[i];
    }
  }
  return 0;
}