#include<iostream>
#include<climits>
using namespace std;
int hurdle_race(int arr[],int n,int k){
    int result;
    int mx=INT16_MIN;
    for(int i=0;i<n;i++){
        mx=max(arr[i],mx);
    }
    if(k<=mx){
        result=mx-k;

    }
    else{
        return 0;
    }
    return result;

}
int main(){
    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<hurdle_race(arr,n,k)<<endl;

}