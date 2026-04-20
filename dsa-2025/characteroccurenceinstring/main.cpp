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
  string str;
  cin>>str;
  int fre[26];
  for(int i=0;i<26;i++){
  	fre[i]=0;
  }	
  for(int i=0;i<str.size();i++){
  	fre[str[i]-'a']++;
  }         
  char ans='a';
  int maxf=0;
  for(int i=0;i<26;i++){
  	if(fre[i]>maxf){
  		maxf=fre[i];
  		ans=i+'a';
	  }
  }
  cout<<maxf<<" "<<ans<<endl;
  return 0;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
}
