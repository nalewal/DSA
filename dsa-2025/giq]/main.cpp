#include<iostream>
using namespace std;
 int main()
 {
     int n; 
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int m,k;
     cin>>m>>k;
     int temp=arr[m];
     arr[m]=arr[k];
     arr[k]=temp;
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
 }