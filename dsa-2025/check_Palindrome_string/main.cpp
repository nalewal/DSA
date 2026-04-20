/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
// 32–47 / 58–64 / 91–96 / 123–126
bool isPalRec(string &str,int i,int j){
    cout <<" "<< i <<" " << j << endl;
    cout << str << endl;
    //Base Case
    if(j==1)
        return true;
    if(i==j)
        return true;
    if(str[i]!=str[j])
        return false;
    if(i<j+1)
        return isPalRec(str,i+1,j-1);
    return true;
}
bool checkPalindrome(string &s)
{
    // Write your code here. N2 i&nJA?a& jnI2n A1b22Ba codingninjassajNiNgNidoc 5?36@6?35 aaBBa@ nyyn
    int n=s.size();
    cout << n << endl;
    cout << "////////////////////" << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    std::string str1="";
    int k = 0;
    for(int i=0; i<n; i++){
        if(  s[i] >= 97 && s[i] <= 122 )  {
            cout << s[i] << endl;
            str1.append(k,s[i]);
            k++;
        }
    }
    cout << str1 << endl;
    int m = str1.size();
     cout << m << endl;
    if(m==0)
        return true;
    return isPalRec(s,0,m-1);
   
}

int main()
{
    // cout<<"Hello World";
    string str;
    getline(cin,str);
    cout << str << endl;
    if(checkPalindrome(str))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}