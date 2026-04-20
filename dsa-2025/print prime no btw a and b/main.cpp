/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int i;
      int j;
    for(j=a;j<=b;j++)
    {
      
        for(i=2;i<=j;i++){
            if(j%i==0){
                break;
            }
        }
        if(i==j){
        cout<<i<<" ";
         }
    
    }
    return 0;
}