/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<i<<endl;
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<linearsearch(arr,n,k)<<endl;
    return 0;
}