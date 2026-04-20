/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	int s1=0;
	int s2=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				s1=s1+a[i][j];
			}
	   if(i=n-j-1){
	       s2=s2+a[i][j];
	   }
		  
	}
	}
	int x=(s1-s2);
	cout<<x<<endl;
	return 0;
}