#include<iostream>
#include<climits>
using namespace std;
int picking_number(int n,int arr[]){
    int frr[101];
    int result=INT16_MIN;
    for(int i=0;i<101;i++){
       frr[i]=0;
    }
    for(int i=0;i<n;i++){
        frr[arr[i]]+=1;
    }
    for(int i=1;i<n;i++){
        result=max(result,frr[i]+frr[i-1]);
    }
    return result;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<picking_number(n,arr)<<endl;
    return 0;

}
