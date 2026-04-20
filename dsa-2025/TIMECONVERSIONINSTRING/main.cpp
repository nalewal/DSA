/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	if(str[8]=='A'){
		if(str[0]=='1'&&str[1]=='2'){
			str[0]='0';
			str[1]='0';
		}
	}
	else{
		if(str[0]=='0'||str[1]!='2'){
			str[0]+=1;
			str[1]+=2;
		}
		
	}
	str.erase(8,2);
	cout<<str<<endl;
}