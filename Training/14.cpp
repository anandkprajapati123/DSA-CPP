#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int m;
       cin>>m;
       int arr[m];
       for(int j=0;j<m;j++){
           cin>>arr[j];
       }
    int sum=accumulate(arr,arr+m,0);
    cout<<sum<<" ";
    int max=*max_element(arr,arr+m);
    out<<max<<" ";
    int min=*min_element(arr,arr+m);
    cout<<min<<" ";
    float avg=sum/m;
    cout<<avg<<" "<<endl;
   }
}