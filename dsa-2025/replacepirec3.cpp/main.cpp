/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;
void replacepi(string str){
    if(str.length()==0){
        return;
    }
    if(str[0]=='p'&&str[1]=='i'){
        cout<<"3.14";
        replacepi(str.substr(2));
    }
    else{
        cout<<str[0];
        replacepi(str.substr(1));
    }
}

int main()
{
    string str;
    cin>>str;
    replacepi(str);
    
    // printf("Hello World");

    return 0;
}
