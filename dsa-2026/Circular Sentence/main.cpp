/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isCircularSentence(string sentence) {
        int size = sentence.length();
        char firstLetter = sentence[0];
        char lastLetter = sentence[size-1];

        if (firstLetter == lastLetter) {
            for (int i = 1; i < size-1; i++) {
                if (sentence[i] == ' ') {
                    if (sentence[i-1] != sentence[i+1]) return false;
                }
            }
            return true;
        }

        return false;
    }
};
int main()
{
    Solution s;

    return 0;
}