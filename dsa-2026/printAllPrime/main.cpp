/******************************************************************************
link : https://www.geeksforgeeks.org/problems/prime-factors5052/1
Prime Factors
Difficulty: EasyAccuracy: 30.47%Submissions: 76K+Points: 2Average Time: 15m
Given a number n. Find its unique prime factors in increasing order.

Examples :

Input: n = 100
Output: [2, 5]
Explanation: Unique prime factors of 100 are 2 and 5.
Input: n = 60
Output: [2, 3, 5]
Explanation: Prime factors of 60 are 2, 2, 3, 5. Unique prime factors are 2, 3 and 5.
Constraints:
1 ≤ n ≤ 106



*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> primeFac(int n) {
        // code here
        vector<int> ans;
        while (n % 2 == 0) {
            if (ans.empty()) {
                ans.push_back(2);
            }
            n /= 2;
        }
        
        for (int i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                if (ans.empty()) {
                    ans.push_back(i);
                } else {
                    if (ans.back() != i) {
                        ans.push_back(i);
                    }
                }
                n /= i;
            }
        }
        if (n > 1) {
            ans.push_back(n);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> arr = s.primeFac(100);
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}