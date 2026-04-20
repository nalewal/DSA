#include <bits/stdc++.h> 
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
    long long sum=0;
    int maxi=-1;
    for(int i=0;i<m;i++){
        sum+=time[i];
        maxi=max(maxi,time[i]);
    }
    long long str=maxi, end=sum,answer;
    while(str<=end){
        long long mid=str+(end-str)/2;
        long days=1;
        long long cr_time=0;
        for(int i=0;i<m;i++){
             cr_time+=time[i];
            if(cr_time>mid){
               
                days++;
                cr_time=time[i];
            }
        }
        if(days<=n){
            answer=mid;
            end=mid-1;
        }
        else{
            str=mid+1;
        }
    }
    return answer;
}