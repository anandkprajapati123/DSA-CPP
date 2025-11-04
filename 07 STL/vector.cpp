#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> v;

  vector<int> a(5,1);
  vector<int> last(a);
  cout<<"print last :"<<endl;
  for(int i:last){
    cout<<i<<" ";
  }cout<<endl;

  cout<<"capacity is "<<v.capacity()<<endl;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  cout<<"capacity is "<<v.capacity()<<endl;
  cout<<"Size is "<<v.size()<<endl;
  cout<<"element at 2nd index is "<<v.at(2)<<endl;
  cout<<"first element is "<<v.front()<<endl;
  cout<<"last element is "<<v.back()<<endl;

  cout<<"before pop"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }cout<<endl;

  v.pop_back();

  cout<<"after pop"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }cout<<endl;

  cout<<"before clear size "<<v.size()<<endl;
  v.clear();
  cout<<"after clear size "<<v.size()<<endl;


}