/******************************************************************************

You are given a 0-indexed array of positive integers nums. Find the number of triplets (i, j, k) that meet the following conditions:

0 <= i < j < k < nums.length
nums[i], nums[j], and nums[k] are pairwise distinct.
In other words, nums[i] != nums[j], nums[i] != nums[k], and nums[j] != nums[k].

Return the number of triplets that meet the conditions.



Input: nums = [4,4,2,4,3]
Output: 3
Explanation: The following triplets meet the conditions:
- (0, 2, 4) because 4 != 2 != 3
- (1, 2, 4) because 4 != 2 != 3
- (2, 3, 4) because 2 != 4 != 3
Since there are 3 triplets, we return 3.
Note that (2, 0, 4) is not a valid triplet because 2 > 0.

Input: nums = [1,1,1,1,1]
Output: 0

Constraints:
3 <= nums.length <= 100
1 <= nums[i] <= 1000


*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class UnequalTriplets {
public:
     int solve(vector<int> input) {
        unordered_map<int, int> freq;
		for (int i : input) {
		    freq[i]++; 
		}
		int pairs = 0;
		int left = 0;
		int right = 0;
		int n = input.size();
		for (auto @k : freq) {
		    const count = k.second;
		    right = n - left - count;
		    pairs += right * count * left;
		    left += count;
		}
		
		return pairs;
     }
};
int main()
{
    std::cout<<"Hello World";












    return 0;
}