#include<iostream>
#include<vector>
using namespace std;

string Right(string s, int k){
  k=k%s.size();
  return s.substr(s.size() - k) + s.substr(0, s.size() - k);
}
string Left(string s, int k){
  k=k%s.size();
  return s.substr(k) + s.substr(0, k);
}

int main()
{
  string s,r;
  cin>>s>>r;
  int n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int j=0;j<n;j++){
    if(arr[j]>=0){
      s=Right(s,arr[j]);
    }
    else{
      s=Left(s,arr[j]);
    }
  }

  if(s==r){
    cout<<"Password Match"<<endl;
  }
  else{
    cout<<"Try Error"<<endl;
  }


  return 0;
}