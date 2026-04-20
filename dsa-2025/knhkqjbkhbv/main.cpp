/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // cout<<"Hello World";
    
    int n1,n2,m1,m2;
    cin>>n1>>n2>>m1>>m2;
    int M=abs(n1-n2);
    int N=abs(m1-m2);
    if(N==M){
        cout<<"2"<<endl;
    }
    else{
        cout<<"1";
    }
    // return 0;

    return 0;
}