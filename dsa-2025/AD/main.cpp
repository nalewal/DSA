#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
  cin>>str;
  char ch;
  cin>>ch;
  int count=0;
    for(int i=0;i<str.length();i++){
       if(str[i]==ch){
           count++;
       }
    }
    cout<<count<<endl;
}