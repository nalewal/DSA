#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int value;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        arr.push_back(value);
        
    }
    int count=0;
    sort(arr.begin(),arr.end());
    for(int i=n-1;i>=0;i--){
        if(arr[i]==arr[n-1]){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
    
}
