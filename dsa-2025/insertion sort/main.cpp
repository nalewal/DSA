/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int crr=a[i];
        int j=i;
        while(j>0&&a[j-1]>crr){
            a[j]=a[j-1];
            j=j-1;
        }
        a[j]=crr;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}