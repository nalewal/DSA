/******************************************************************************

1005. Maximize Sum Of Array After K Negations

Given an integer array nums and an integer k, modify the array in the following way:

choose an index i and replace nums[i] with -nums[i].
You should apply this process exactly k times. You may choose the same index i multiple times.

Return the largest possible sum of the array after modifying it in this way.



Example 1:

Input: nums = [4,2,3], k = 1
Output: 5
Explanation: Choose index 1 and nums becomes [4,-2,3].
Example 2:

Input: nums = [3,-1,0,2], k = 3
Output: 6
Explanation: Choose indices (1, 2, 2) and nums becomes [3,1,0,2].
Example 3:

Input: nums = [2,-3,-1,5,-4], k = 2
Output: 13
Explanation: Choose indices (1, 4) and nums becomes [2,3,-1,5,4].


Constraints:

1 <= nums.length <= 104
-100 <= nums[i] <= 100
1 <= k <= 104

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    void mergeArray(vector<int>& arr, int left, int right) {
          int mid = left + (right - left) / 2;
          int len1 = mid - left + 1;
          int len2 = right - mid;

          vector<int> leftArr(len1), rightArr(len2);

          for (int i = 0; i < len1; i++) {
               leftArr[i] = arr[left + i];
          }
          for (int i = 0; i < len2; i++) {
               rightArr[i] = arr[mid + 1 + i];
          }

          int index1 = 0, index2 = 0, mainArrayIndex = left;

          while (index1 < len1 && index2 < len2) {
               if (leftArr[index1] < rightArr[index2]) {
                    arr[mainArrayIndex++] = leftArr[index1++];
               } else {
                    arr[mainArrayIndex++] = rightArr[index2++];
               }
          }

          while (index1 < len1) {
               arr[mainArrayIndex++] = leftArr[index1++];
          }
          while (index2 < len2) {
               arr[mainArrayIndex++] = rightArr[index2++];
          }
     }
     void mergeSort(vector<int>& arr, int left, int right) {
          if (left >= right) {
               return;
          }
          int mid = left + (right - left) / 2;
          mergeSort(arr, left, mid);
          mergeSort(arr, mid + 1, right);
          mergeArray(arr, left, right);
     }
	int bruitForce(vector<int>& nums, int k) { // using sort method
		mergeSort(nums, 0, nums.size()-1);
        // printArray(nums);
		int result = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (k > 0 && nums[i] < 0) {
                nums[i] = (-1) * nums[i];
                k--;
            }
		}

        int minIndex = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[minIndex]) {
                minIndex = i;
            }
        }

        if (k % 2 != 0) {
            nums[minIndex] = (-1) * nums[minIndex];
        }

        for (int i = 0; i < nums.size(); i++) {
            result += nums[i];
        }
		return result;
	}
public:
	int largestSumAfterKNegations(vector<int>& nums, int k) {
		return bruitForce(nums, k);
	}
	
	void printArray(vector<int>& nums) {
	    cout << endl ;
	    for (int i =0 ; i < nums.size(); i++) {
	        cout << nums[i] << " ";
	    }
	    
	    cout << endl;
	}
};

int main()
{
	// std::cout<<"Hello World";
	Solution s;
	vector<int> arr = {2,-3,-1,5,-4};
	cout << s.largestSumAfterKNegations(arr, 2) << endl;
	return 0;
}