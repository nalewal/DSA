/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<climits>
using namespace std;
int  main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curr=2;
    int j=2;
    int d=a[1]-a[0];
    int ans=2;
    while(j<n){
        if(a[j]-a[j-1]==d){
            curr++;
        }
        else{
            d=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}