/******************************************************************************
link : https://www.geeksforgeeks.org/problems/find-sum-of-even-factors-of-a-number1725/1
Find sum of even factors of a number
Difficulty: BasicAccuracy: 59.07%Submissions: 7K+Points: 1
Given a number N, find the even factor sum of the number N.
 

Example 1:

Input: 
N = 30 
Output: 
48 
Explanation:
Even dividers sum 2 + 6 + 10 + 30 = 48
Example 2:

Input: 
N = 18 
Output: 
26 
Explanation:
Even dividers sum 2 + 6 + 18 = 26

Your Task:
You don't need to read input or print anything. Your task is to complete the function evenFactors() which takes an integer N as input parameters and returns an integer, number of even factors of N.
 

Expected Time Complexity: O(sqrt(N))
Expected Space Complexity: O(1)
 

Constraints:
1 <= N <= 109

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int evenFactors(int N) {
        // code here
        int sum = 0;
        for (int i = 1; i * i <= N; i++) {
            if (N % i == 0) {
                int firstFactor = i;
                int secondFactor = N/i;
                
                if (!(firstFactor & 1)) {
                    sum += firstFactor;
                }
                
                if (!(secondFactor & 1) && secondFactor != firstFactor) {
                    sum += secondFactor;
                }
            }
        }
        return sum;
    }
};

int main()
{
    Solution s;
    cout << " sum of Even Factors => " << s.evenFactors(100) << endl;
    return 0;
}