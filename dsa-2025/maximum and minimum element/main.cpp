/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    cout<<mx<<" "<<mn<<" "<<endl;
    return 0;
}
