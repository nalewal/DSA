#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
// void print(vector<int> v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
    
// }
vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    while(s<e){
        swap(v[s++],v[e--]);
    }
    // return v;
    for(int i:v){
        cout<<i<<" ";
    }
}

void findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	long long int sum1=0;
    long long int sum2=0;
    long long int it=1;
    long long int kt=1;
    int i=n-1,j=m-1;
    while( i>=0 )
    {
        long long int value=a[i]*it;
        sum1=sum1+value;
        it=it*10;
        i--;
        
    }
    while(j>=0){
        long long int value=b[j]*kt;
        sum2=sum2+value;
        kt=kt*10;
        j--;
       
    }
    // cout<<sum1<<"''''''"<<endl;
    // cout<<sum2<<"'''''''"<<endl;
    long long int sum3=sum1+sum2;
    vector<int> ans;
    while(sum3!=0){
        int dig=sum3%10;
        sum3=sum3/10;
        ans.push_back(dig);
    }
   return reverse(ans);
//   print(ans);
    
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
   findArraySum(a,n,b,m);
 
}