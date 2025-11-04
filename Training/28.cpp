#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    getline(cin, s1);
    string s2;
    cin >> s2;
    int n;
    cin >> n;
    string res="";
    for (int i = 0; i < s1.length(); i ++)
    {
      res+=s1[i];
      if((i+1)%n==0){
        res=res+s2;
      }
    }
    cout << res << endl;
}