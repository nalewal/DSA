/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	//convert in to upper case
	for(int i=0;i<str.size();i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]-=32;
		}
	}
	cout<<str<<endl;
		//conevrt in to lower case
		for(int i=0;i<str.size();i++){
			if(str[i]=='A'&&str[i]=='Z'){
				str[i]+=32;
			}
		}
		cout<<str;
	
	return 0;
}
