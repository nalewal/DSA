/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
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
        cin>>arr[i];
    }
    int maxsum;
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum+kadane(arr,n);
    maxsum=max(wrapsum,nonwrapsum);
    cout<<maxsum<<endl;
    return 0;
}