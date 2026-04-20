#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    // int rank[n];
    // rank[0]=1;
    int rank=1;
    for(int i=0;i<n;i++){
        if(arr1[i]==arr1[i+1]){
            rank=rank;
            // rank[i+1]=rank;
        }
        else{
            rank+=1;
            // rank[i+1]=rank;
        }
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
        cin>>arr2[i];
   for(int i=0;i<m;i++){

if(arr2[i]==arr1[n-1]){
    cout<<rank<<endl;
    i++;
    n--;
}
else if(arr2[i]<arr1[n-1]){
    rank++;
    cout<<rank;
    i++;
    n--;
}
else{
    rank--;
    cout<<rank<<endl;
    i++;
    n--;
}
        

    }
    return 0;



}