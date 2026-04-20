/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	int sr=0;
	int sc=0;
	int er=n-1;
	int ec=m-1;
	while(sr<=er&&sc<=ec){
		//start row
		for(int col=sc;col<=ec;col++){
			cout<<a[sr][col];
		}
		sr++;
		//for end column
		for(int row=sr;row<=er;row++){
			cout<<a[row][ec];
		}
		ec--;
		//for last row
		for(int col=ec;col>=sc;col--){
			cout<<a[er][col];
		}
		er--;
		//for first column
		for(int row=er;row>=sr;row--){
			cout<<a[row][sc];
		}
		sc++;
	}
	return 0;
}