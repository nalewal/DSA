#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int electronic_shop(int budget,int n1,int n2,int arr1[],int arr2[]){
	int mostmax=INT_MIN;
	int maxsum=0;
	for(int i=0;i<n1;i++){
		for(int j=0;i<n2;j++){
			maxsum=arr1[i]+arr2[j];
			if(maxsum<budget){
				mostmax=max(mostmax,maxsum);
				
				
			}	
			if(i==n1-1&&j==n2-1){
				if(maxsum>budget){
					return -1;
				}
			}	}
	}
	return mostmax;
}
int main()
{
	int budget,n1,n2;
	cin>>budget>>n1>>n2;
	int arr1[n1];
	int arr2[n2];
	for(int i=0;i<n1;i<<i++){
		cin>>arr1[i];
	}
	for(int j=0;j<n2;j++){
		cin>>arr2[j];
		
	}
	cout<<electronic_shop(budget,n1,n2,arr1,arr2)<<endl;
	return 0;
}
