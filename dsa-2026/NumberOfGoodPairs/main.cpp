/******************************************************************************
1512. Number of Good Pairs

Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.

 

Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
Example 2:

Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.
Example 3:

Input: nums = [1,2,3]
Output: 0
 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // bruite force 
        // int count = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i +1; j < nums.size(); j++) {
        //         if (nums[i] == nums[j]) {
        //             count++;
        //         }
        //     }
        // }
        // return count;

        // optimal

        int maximum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maximum) {
                maximum = nums[i];
            }
        }

        vector<int> frequency(maximum + 1, 0);
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (frequency[nums[i]] != 0) {
                count += frequency[nums[i]];
                frequency[nums[i]]++;
            } else {
                frequency[nums[i]]++;
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1,2,3,1,1,3};
    
    cout << s.numIdenticalPairs(nums) << endl;

    return 0;
}