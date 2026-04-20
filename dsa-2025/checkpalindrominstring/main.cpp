/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"palindrom"<<endl;
    }
    else{
        cout<<"not palindrom";
    }
    return 0;
}