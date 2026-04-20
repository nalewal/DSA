/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>
#include<iostream>
#include<string>
using namespace std;
void reverse(string str){
    if(str.length()==0){
        return;
    }
    string ros=str.substr(1);
    reverse(ros);
    cout<<str[0]<<endl;
    
}
int main()
{
    string str;
    cin>>str;
    reverse(str);
    
    // printf("Hello World");

    return 0;
}
