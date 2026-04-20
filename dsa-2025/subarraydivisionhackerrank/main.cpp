/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int d,m;
	cin>>d>>m;
	int count=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=0;
		int limit=m+i;
		for(int j=i;j<limit;j++){
			sum+=a[j];
			if(j==limit-1){
				if(sum==d){
		        count++;
				sum=0;
				}
			}
		}
	
	}
	cout<<count<<endl;
	return 0;
}