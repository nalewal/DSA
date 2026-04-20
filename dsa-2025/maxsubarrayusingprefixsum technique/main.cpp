/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

**************************************************************/
#include<iostream>

#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int crr[n+1];
    crr[0]=0;
    for(int i=1;i<=n;i++){
        crr[i]=crr[i-1]+arr[i-1];
    }
    int maxsum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=crr[i]-crr[j];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum<<endl;
    return 0;
}