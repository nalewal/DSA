/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ArrayChallenge(int arr[], int n){
    sort(arr,arr+n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    sum=sum*2;
    int mul=arr[0]*arr[1];
    if(mul>=sum){
        return 1;
    }
    else{
        return -1;
    }
}

int main()
{
    // 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=ArrayChallenge(arr,n);
    if(res==1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false";
    }
    // cout<<str<<endl;
    // return 0;
    
    

    return 0;
}
