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
    int largestPrimeFactor(int n) {
        // code here
        int largest = 1;
    		while (n % 2 == 0) {
                  if (largest < 2) {
                        largest = 2;
                  }
                  n /= 2;
                  cout << n << " ";
            }
            
            for (int i = 3; i * i < n; i += 2) {
                  while (n % i == 0) {
                        if (largest < i) {
                              largest = i;
                        }
                        n /= i;
                        cout << n << " ";
                  }
            }
            cout << endl;
            if (n > 1) {
                  largest = n;
            }
            cout << largest << endl;
            return largest;
    }
};
int main()
{
    Solution s;
    cout << s.largestPrimeFactor(71824) << endl;
    return 0;
}