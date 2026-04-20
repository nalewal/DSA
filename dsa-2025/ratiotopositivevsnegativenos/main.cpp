/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	float c=0,d=0,e=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			c++;
		}
		else if(a[i]<0){
			d++;
			
		}
		else{
			e++;
		}
	}
	float f=c/n;
	float g=d/n;
	float h=e/n;
	cout<<fixed<<setprecision(6)<<f<<" "<<fixed<<setprecision(6)<<g<<" "<<fixed<<setprecision(6)<<h<<endl;
	return 0;
}
