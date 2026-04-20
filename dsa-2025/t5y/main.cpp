#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n>0){
        int rem=n%10;
        c+=rem;
        n=n/10;
        
    }
    char ch=96-c;
    cout<<ch;
}