#include <iostream>
#include <stack>
using namespace std;
int main(){
  stack<string> s;
  s.push("Anand");
  s.push("Kumar");
  s.push("Prajapati");
  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;
  cout << s.size() << endl;
  cout << s.empty() << endl;


}
