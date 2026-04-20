#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int sum=arr[0];
    
    for(int j=1;j<n;j++){
        sum+=arr[j];
        if(arr[j-1]<arr[j]){
            sum+=arr[j];
        }
        else{
            sum=0;
            sum+=arr[j];
        }
        
    }
    cout<<sum<<endl;
    return 0;
}