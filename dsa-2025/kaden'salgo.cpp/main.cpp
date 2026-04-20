#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 long long maxSubarraySum(ll arr[], ll n){
     
      long long sum=0;
 long long maxi=-1;
 for(int i=0;i<n;i++){
     sum+=arr[i];
     maxi=max(maxi,sum);
     if(i==n-1 && sum<=0){
         return -1;
     }
     if(sum<0){
         sum=0;
     }
 }
return sum;
     
 }
int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll result=maxSubarraySum(arr,n);
    cout<<result<<" ";
    return 0;
}