#include <iostream>
#include <queue>
using namespace std;
int main(){
  queue<string> q;
  q.push("Anand");
  q.push("Kumar");
  q.push("Prajapati");
  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;
  cout << q.size() << endl;
  cout << q.empty() << endl;

}
