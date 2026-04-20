#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i,j;
    cin>>i>>j;
    int k;
    cin>>k;
    // int rem=0;
     int rev=0;
    //  int trev=rev;
    // int trem=rem;
    int trev=rev;
    int count=0;
    for(int s=i;s<=j;s++){
        // int rev=0;
        //  int rem=0;
        int ts=s;
        while(ts!=0){
          int  rem=ts%10;
            rev=rev*10+rem;
            ts=ts/10;

        }
        
        int t=abs(s-rev);
        //  int u=abs(t);
         if(t%k==0){
             count++;
       }
       rev=trev;
    // cout<<rev<<endl;
}

    //  cout<<count<<endl;
    cout<<count<<endl;
    return 0;
}
