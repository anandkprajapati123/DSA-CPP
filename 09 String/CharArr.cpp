#include<iostream>
using namespace std;

void reverse(char name[],int n){
  int s=0;
  int e=n-1;
  while(s<=e){
    swap(name[s++],name[e--]);
  }
}

int getlength(char name[]){
  int cnt=0;
  for(int i=0; name[i] != '\0'; i++){
    cnt++;
  }
  return cnt;
}

int main()
{
  char name[20];
  cout<<"Enter your name: ";
  cin>>name;
  // name[2]='\0';
  // cin.getline(name,20);
  cout<<"Your name is: "<<name<<endl;

  reverse(name,getlength(name));
  cout<<"reverse of your name is: "<<name<<endl;

  cout<<"Length of your name is: "<<getlength(name)<<endl;


  return 0;

}