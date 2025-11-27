#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int k, n, m;
  cin>>k>>n>>m;
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 0; i < s.length(); i++){
    if (int(s[i]) >= n && int(s[i]) <= m){
      cnt++;
    }
  }
  cout << cnt << endl;
}