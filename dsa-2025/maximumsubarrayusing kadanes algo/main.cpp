/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int crrsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        crrsum+=arr[i];
        if(crrsum<0){
            crrsum=0;
        }
        maxsum=max(maxsum,crrsum);
    }
    cout<<maxsum<<endl;
    return 0;
}