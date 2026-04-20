#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int  maximumProfit(vector<int> &prices){
     int buy=0,sell=0,newprofit=0,oldprofit=0,k=0;
    
//     int n=prices.size();
    for(int i=0;i<prices.size()-1;i++){
       buy=prices[k];
        sell=prices[i+1];
        newprofit=sell-buy;
        if(buy>sell){
            k++;
            i-=1;
        }
        if(oldprofit<newprofit){
            oldprofit=newprofit;
        }
       
    
    }
    return oldprofit;
    
}
int main()
{
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    maximumProfit(prices);
    return 0;
}

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
ANOTHER SOLUTION 
\\\\\\\\\\\\\\\\\\\\\\\
class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int profit = 0;
     int pointer = prices[0];
     for( int i = 1; i < prices.size(); i++){
         if( prices[i] < pointer )
             pointer = prices[i];
         else
             profit = max( profit, prices[i] - pointer );
     }
        return profit;
    }
};
