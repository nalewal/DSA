#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPossible(vector<ll> arr,ll n,ll mid,ll h){
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(arr[i]-h>0 ){
           sum+=arr[i]-h;
        }
        
    }
    if(sum>=h){
            return true;
        }
       return false;
}
ll getHeight(vector<ll> arr,ll n,ll h){
    // sort(arr,arr+n);
    ll maxy=-1;
    for(ll i=0;i<n;i++){
        if(arr[i]>maxy){
            maxy=arr[i];
        }
    }
    ll str=0;
    ll end=maxy;
    ll ans;
    ll mid=str+(end-str)/2;
    while(str<=end){
        if(isPossible(arr,n,mid,h)){
            ans=mid;
            str=mid+1; 
        }
        else{
           end=mid-1;
        }
        mid=str+(end-str)/2;
    }
    return ans;
}
int main()
{
    ll n,h;
    cin>>n>>h;
    vector<ll> arr(n,0);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<getHeight(arr,n,h)<<endl;
    return 0;
}
