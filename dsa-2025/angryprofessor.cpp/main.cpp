#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int count=0;
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int j=0;j<n;j++){
         cin>>arr[j];
         if(arr[j]<=0){
             count++;
         }
        }
        if(count==k){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}