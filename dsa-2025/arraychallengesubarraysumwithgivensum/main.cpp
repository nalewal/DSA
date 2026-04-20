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
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[n];
    int i=0,j=0,sum=0;
    while(j<n&&sum+a[j]<=s){
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
    }
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
           cout<<i+1<<" "<<j+1<<endl;
            break;
        }
        else{
            cout<<"-1"<<endl;
        }
        j++;
    }
    
    
    return 0;
}