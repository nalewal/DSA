#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
     vector <int> permutation(n);
     for(int i=0; i<n; i++){
         cin >>  permutation[i];
     }
     bool ans=true;
      
    //  vector <int> naya;
     int i=n;
     while(i>0){
              if(permutation[i]>permutation[i-1]){
             int temp=permutation[i];
          permutation[i]=permutation[i-1];
          permutation[i-1]=temp;
          ans=false;
          break;
        }
        i--;
 }
//  if(ans==true){
     
//  }
      
    if(ans==true){
        int str=0;
        int end=n-1;
        while(str<end){
            swap(permutation[str],permutation[end]);
        } 
        
       
    }
    else{
        for(int k:permutation){
            cout<<k<<" , ";
        }
        cout<<endl;
    }
    //  for(int k:permutation){
    //         cout<<k<<" , ";
    //  }
    // cout<<naya;
    // for(int i=0;i<naya.size();i++){
    //     cout<<naya[i]<<" , ";
    // }
    for(int j:permutation){
            cout<<j<<" ";
        }
    
    return 0;
}