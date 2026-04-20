/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<string>
using namespace std;
string removedup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=removedup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;  
}
int main()
{
    string s;
    cin>>s;
    cout<<removedup(s)<<endl;
    // printf("Hello World");

    return 0;
}

