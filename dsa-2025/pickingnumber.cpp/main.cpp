#include<iostream>
#include<cmath>
using namespace std;
int picking_number(int n,int arr[]){
    int i=0;
    int length=0;
    for(int j=1;j<n;j++){
       int x=arr[j]-arr[i];
       int y=abs(x);
       if(y<=1){
            i++;
            j++;
            length++;
        }else{
            j++;
        }
    }
    return length;
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
}
