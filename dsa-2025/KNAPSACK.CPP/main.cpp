#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int knapsack(int value[],int wt[],int n,int W){
    if(n==0||W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(value,wt,n-1,W);

    }
    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));

}
int main(){
     int n;
     cin>>n;
     int W;
    cin>>W;
   
    int value[n];
     int wt[n];
    for(int i=1;i<=n;i++){
         cin>>wt[i];
         cin>>value[i];
    }
    cout<<knapsack(value,wt,n,W)<<endl;

    }