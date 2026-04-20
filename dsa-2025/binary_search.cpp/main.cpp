#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int key_at_idx(int arr[],int n,int key){
    int str=0,end=n-1;
    int mid=str+(end-str)/2;
    while(str<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            str=mid+1;
        }
         if(key<arr[mid]){
            end=mid-1;
        }
        
        mid=str+(end-str)/2;
    }
    return -1;
    
}
int main()
{
    int n,key;
    // cin>>arr[n];
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sort(arr.begin(),arr.end());
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    cout<<"''''''''''''''''''''''''''''''''''"<<endl;
    int idx=key_at_idx(arr,n,key);
    
     cout<<key<<" is found at"<<idx<<endl;
    
    
    return 0;
}