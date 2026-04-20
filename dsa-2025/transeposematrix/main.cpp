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
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int temp=a[i][j];
			a[i][j]=a[j][i];
		    a[j][i]=temp;
			
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<a[i][j];
		cout<<endl;
	}
	
	return 0;
}