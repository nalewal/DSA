/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Palindrome {
public:
	bool check(string s) {
    	int start = 0;
		int end = s.length() - 1;
		while (start < end)	 {
			if (s[start] != s[end]) {
				return false;
			}
			start++;
			end--;
		}
		return true;
      }
};
int main()
{
    Palindrome p;
    string str;
    getline(cin, str);
    cout << (p.check(str) ? " Yes " : " No ") << endl;
    return 0;
}