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
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]]!=-1){
            minidx=min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }
    return 0;
}


