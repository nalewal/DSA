/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>
#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstoccurence(arr,n,i+1,key);
    
}
int lastoccurence(int arr[],int n,int i,int key){
    
    if(i==n){
        return -1;
    }
    int resarray=lastoccurence(arr,n,i+1,key);
    if(resarray!=-1){
        return resarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main()
{
    // printf("Hello World");
    int n;
   
    cin>>n;
     
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int key;
    cin>>key;
    
    cout<<firstoccurence(arr,n,0,key)<<endl;
    cout<<lastoccurence(arr,n,0,key)<<endl;
    return 0;

    // return 0;
}


