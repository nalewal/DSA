#include<iostream>
#include<climits>
using namespace std;
int electronic_shop(int budget,int n1,int n2,int arr1[],int arr2[]){
	int mostmax=INT_MIN;
	int maxsum=0;
	
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(mostmax<budget){
		maxsum+=arr1[i]+arr2[j];
		mostmax=max(mostmax,maxsum);
			
				
			}
			
		}
	}
return mostmax;
}
int main(){
	int budget;
	int n1,n2;
	cin>>budget>>n1>>n2;
	int arr1[n1];
	int arr2[n2];
	for(int i=0;i<n1;i++)
		cin>>arr1[i];
	for(int j=0;j<n2;j++)
		cin>>arr2[j];
	cout<<electronic_shop(budget,n1,n2,arr1,arr2);
	return 0;
}