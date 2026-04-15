/******************************************************************************

338. Counting Bits
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
 

Constraints:

0 <= n <= 105
 

Follow up:

It is very easy to come up with a solution with a runtime of O(n log n). Can you do it in linear time O(n) and possibly in a single pass?
Can you do it without using any built-in function (i.e., like __builtin_popcount in C++)?

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSetBitsWithLookupTable() {
    // Another Solution using lookup table of bits  : will see later  
        return 0;
    }
    
    int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            if (n & 1) {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        for (int i = 1; i <= n; i++) {
            ans.push_back(countSetBits(i));
        }
        return ans;
    }
    
    vector<int> countBitsOptimalApproach(int n) {
        vector<int> ans(n+1);
        if (n == 0) return ans;
        ans[0] = 0;
        for (int i = 1; i <= n; i++) {
            if (i & 1) {
                ans[i] = ans[i/2] + 1;
            } else {
                ans[i] = ans[i/2];                
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    int n = 10;
    vector<int> output = s.countBitsOptimalApproach(n);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}