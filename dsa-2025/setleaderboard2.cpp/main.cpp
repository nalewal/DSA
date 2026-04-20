#include<iostream>
using namespace std;
int main()
{
    // cout<<"hello"<<endl;
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
        cin>>a1[i];
    int rank=0;
    for(int i=0;i<n;i++)
        if(a1[i]==a1[i+1])
            rank=rank;
        else
            rank++;
    // cout<<rank<<endl;
    int rank1=rank;
    int m;
    cin>>m;
    int a2[m];
    for(int i=0;i<m;i++){
         rank=rank1;
        cin>>a2[i];
        while(n>=0){
            if(a2[i]==a1[n-1]){
              rank=rank;
            break;
            }
            else if(a2[i]>a1[n-1]){
             rank--;
            }
            else{
                rank++;
                break;

            }
            n--;
        }
        cout<<rank<<endl;
       
    }
}