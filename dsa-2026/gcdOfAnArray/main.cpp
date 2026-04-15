/******************************************************************************

1979. Find Greatest Common Divisor of Array
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

 

Example 1:

Input: nums = [2,5,6,9,10]
Output: 2
Explanation:
The smallest number in nums is 2.
The largest number in nums is 10.
The greatest common divisor of 2 and 10 is 2.
Example 2:

Input: nums = [7,5,6,8,3]
Output: 1
Explanation:
The smallest number in nums is 3.
The largest number in nums is 8.
The greatest common divisor of 3 and 8 is 1.
Example 3:

Input: nums = [3,3]
Output: 3
Explanation:
The smallest number in nums is 3.
The largest number in nums is 3.
The greatest common divisor of 3 and 3 is 3.
 

Constraints:

2 <= nums.length <= 1000
1 <= nums[i] <= 1000


*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcdOfTwoNumber(int a, int b) {
        if (b == 0) return a;
        return gcdOfTwoNumber(b, a%b);
    } 
    int findGCD(vector<int>& nums) {
        int smallest = nums[0];
        int largest = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < smallest) {
                smallest = nums[i];
            }
            if (nums[i] > largest) {
                largest = nums[i];
            }
        }
        return gcdOfTwoNumber(largest, smallest);
        
    }
};


int main()
{
    Solution s;
    vector<int> nums = {};
    int gcd = s.findGCD(nums);
    cout << " GCD of Arrayis => " << gcd << endl;
    return 0;
}