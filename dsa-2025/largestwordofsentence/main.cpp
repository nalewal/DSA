/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()

{
    int n;
    cin>>n;
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int crrlen=0,maxlen=0,st=0,maxst=0;
    while(1){
        if(arr[i]==' '||arr[i]=='\0'){
            if(crrlen>maxlen){
                maxlen=crrlen;
                maxst=st;
            }
            crrlen=0;
            st=i+1;
        }
    else{
        crrlen++;
    }
    if(arr[i]=='\0'){
        break;
    }
    i++;
    }
    cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++){
        cout<<arr[i+maxst];
        
    }
    
    
    return 0;
}
