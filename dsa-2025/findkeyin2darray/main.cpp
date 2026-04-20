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
	int n,m,key;
	cin>>n>>m>>key;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	int r=0;
	int c=n-1;
	bool found=false;
	while(r<m&&c>=0){
		if(a[r][c]==key){
			cout<<r<<" "<<c<<endl;
			found=true;
		}
        if(a[r][c]>key){
			c--;
		}
		else{
			r++;
		}
	}
	if(found){
		cout<<"found"<<endl;
	}
	else{
		cout<<"not found";
			}
	return 0;
}