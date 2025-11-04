#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  string wrd="Programming";
  int m_count=count(wrd.begin(),wrd.end(),'m');
  if(m_count>=1){
    cout<<"YES";
  }
    else{
      cout<<"NO";
    }
}