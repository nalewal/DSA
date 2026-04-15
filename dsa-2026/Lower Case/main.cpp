/******************************************************************************

Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.



Input: s = "Hello"
Output: "hello"

Input: s = "here"
Output: "here"

Constraints:
1 <= s.length <= 100
s consists of printable ASCII characters.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class LowerCase {
public:
	string solve(string s) {
    	for (int i =0; i < s.length(); i++) {
    	    if (s[i] - 'A' >= 0 && s[i] - 'A' <= 25) {
    	        s[i] = (char)tolower(s[i]);
    	    }
    	}
    	return s;
    }
};

int main()
{
    LowerCase obj;
    string str = "Hello";
    cout << obj.solve(str) << " ";
    cout << endl;
    return 0;
}