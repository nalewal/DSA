#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums,int target){
    vector<int> ans;
    for(int i=0,j=i+1;j<nums.size();i++,j++){
        if((nums[i]+nums[j])==target){
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    return ans;
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    twoSum(arr,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}