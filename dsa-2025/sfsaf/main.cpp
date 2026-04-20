#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
int main()
{  
    string str;
    getline(cin,str);
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<str.length();i++){
        mx=max(str[i]-0,mx);
        mn=min(str[i]-0,mn);
    }
    cout<<mn+mx<<endl;
}