/******************************************************************************
1748. Sum of Unique Elements

You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.

 

Example 1:

Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.
Example 2:

Input: nums = [1,1,1,1,1]
Output: 0
Explanation: There are no unique elements, and the sum is 0.
Example 3:

Input: nums = [1,2,3,4,5]
Output: 15
Explanation: The unique elements are [1,2,3,4,5], and the sum is 15.
 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int maximum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maximum) {
                maximum = nums[i];
            }
        }
        vector<int> fre(maximum + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            fre[nums[i]]++;
        }

        int sum = 0;
        for (int x = 0; x < fre.size(); x++) {
            if (fre[x] == 1) sum += x;
        }
        return sum;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,2,3,2]};
    cout << " sum is => " << s.sumOfUnique(nums) << endl;

    return 0;
}