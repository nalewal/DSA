#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    // int h;
    int arr[t];
    int h=1;
    int temp=h;
    for(int i=0;i<t;i++){
        cin>>arr[i];
        if(arr[i]==0){
        
            cout<<h<<endl;
        }
        for(int j=1;j<=arr[i];j++){
            if(j%2==0){
                h=h+1;
            }
            else{
                h=2*h;
            }
        }
        cout<<h<<endl;
        h=temp;
    }
    return 0;
}