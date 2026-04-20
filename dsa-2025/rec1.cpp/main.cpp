#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int fib(int n){
    if(n==0||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2); 
}
int power(int n,int p){
    if(p==0){
        return 1;
    }
    return n*power(n,p-1);
}
int main() {
    int n;
    cin>>n;
   
    cout<<sum(n)<<endl;
    cout<<fact(n)<<endl;
    cout<<fib(n)<<endl;
     int p;
    cin>>p;
    cout<<power(n,p)<<endl;
    cout<<5*5*5*5*5<<endl;
    return 0;
}