/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n){
    int crrsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        crrsum+=arr[i];
        if(crrsum<0){
            crrsum=0;
        }
        maxsum=max(maxsum,crrsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=arr[i]*(-1);
    }
    wrapsum=totalsum+kadane(arr,n);
    int d=max(wrapsum,nonwrapsum);
    cout<<d<<endl;
    return 0;
}