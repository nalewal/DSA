/******************************************************************************

Given an integer N, the task is to find the number of trailing zeroes in the binary representation of the given number.

Input 1: N = 12
Output 1: 2
Explanation 1: The binary representation of the number 13 is “1100”. Therefore, there are two trailing zeros in the 12.

Input 2: -56
Output 2: 3
Constraints:
-106 <= N <= 106

*******************************************************************************
Approach is very simple, just right shift the number and find first set bit ten terminate the loop so count of shift operation will be the answer


*/
#include <bits/stdc++.h>
using namespace std;
class TrailingZero {
public:
	int solve(int n) {
    	int count = 0;
    	n = abs(n);
    	 cout << " n is => "<< n << endl;
    	 while (n >= 0) {
    	     int currentBit = n & 1;
    	     if (currentBit) {
    	         break;
    	     } else {
    	         count++;
    	     }
    	     n = n >> 1;
    	 }
    	 return count;
    		
      }
};
int main()
{
    TrailingZero obj;
    int n = -56;
    
    int trailingZerosCount = obj.solve(n);
    cout << " ans is => " << trailingZerosCount << endl;

    return 0;
}