#include <iostream>
#include<bits/stdc++.h>
#include<climits>

using namespace std;
int main() {
    int arr[27];
    for(int i=0;i<27;i++){
        cin>>arr[i];
    }
    string str;
    getline(cin,str);
    int n=str.length();
    int mx=-1;
    for(int i=0;i<n;i++){
        mx=max(arr[str[i]-96],mx);
    }
    cout<<n*mx<<endl;
    return 0;
}
