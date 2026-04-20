#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
        cin>>a1[i];
    int rank=0;
    for(int i=0;i<n;i++){
        if(a1[i]==a1[i+1]){
            rank=rank;
        }
        else{
            rank++;
        }
    }
    // cout<<rank<<endl;
    int m;
    cin>>m;
    int a2[m];
    for(int i=0;i<m;i++)
        cin>>a2[i];
    for(int i=0;i<m;i++){
        n=n;
        while(n>=0){
            if(a2[i]==a1[n-1]){
                rank=rank;
                cout<<rank;
            }
            else if(a2[i]<a1[n-1]){
                rank++;
                cout<<rank<<endl;
            }
            else{
                rank--;
                cout<<rank;
            }
            n--;
        }
    }
    return 0;
    
}