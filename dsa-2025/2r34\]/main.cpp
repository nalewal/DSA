#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mn=INT_MIN;
    int mx=INT_MIN;
    int sum=0;
    int sum1=0;
    for(int i=0;i<n;i++){
        if(i<n-1){
            sum+=arr[i];
            mn=max(mn,sum);
        }
        if(i>0){
            sum1+=arr[i];
            mx=max(mx,sum1);
        }
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}