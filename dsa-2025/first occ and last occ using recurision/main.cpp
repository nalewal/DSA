/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int firstocc(int arr[],int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
    
}
int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    
    int restarr=lastocc(arr,n,i+1,key);
    if(restarr!=-1){
        return restarr;
    }
     if(arr[i]==key){
        return i;
    }
    return -1;
    
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<firstocc(arr,n,0,key)<<endl;
    cout<<lastocc(arr,n,0,key);
    return 0;
}


