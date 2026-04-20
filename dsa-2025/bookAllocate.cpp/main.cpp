#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPossible(vector<ll> time,ll m,ll n,ll mid){
    ll std=1;
    ll page_sum=0;
    for(ll i=0;i<n;i++){
        if(page_sum+time[i]<=mid){
            page_sum+=time[i];
        }
        else{
            std++;
            if(std>m || time[i]>mid){
                return false;
            }
            page_sum=time[i];
        }
    }
    return true;
}
long long ayushGivesNinjatest(ll n, ll m, vector<ll> time) 
{	
 ll str=0;
   ll sum=0;
    for(ll i=0;i<m;i++){
        sum+=time[i];
    }
    ll end=sum;
    ll ans=-1;
    ll mid=str+(end-str)/2;
    while(str<=end){
        if(isPossible(time,m,n,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            str=mid+1;
        }
        mid=str+(end-str)/2;
    }
    return ans;
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> time(m,0);
    for(ll i=0;i<m;i++){
        cin>>time[i];
    }
    cout<<ayushGivesNinjatest(n,m,time)<<endl;
    return 0;
}