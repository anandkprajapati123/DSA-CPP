#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string wrd;
    getline(cin,wrd);
    int m_count=count(wrd.begin(),wrd.end(),'&');
    int m_count1=count(wrd.begin(),wrd.end(),'#');
    if((wrd.length())%2==0 && m_count>0 && m_count1>0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}