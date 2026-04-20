/******************************************************************************
912. Sort an Array

Given an array of integers nums, sort the array in ascending order and return it.

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

 

Example 1:

Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).
Example 2:

Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
Explanation: Note that the values of nums are not necessarily unique.
 

Constraints:

1 <= nums.length <= 5 * 104
-5 * 104 <= nums[i] <= 5 * 104

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void mergeArray(vector<int>&arr, int left, int right) {
        int mid = left + (right - left) / 2;

        int len1 = mid - left + 1;
        int len2 = right- mid;
        vector<int> leftArr(len1), rightArr(len2);

        for (int i = 0; i < len1; i++) {
            leftArr[i] = arr[left+i];
        }
        for (int i = 0; i < len2; i++) {
            rightArr[i] = arr[mid+i+1];
        }
        int index1 = 0, index2 = 0;
        int mainArrayIndex = left;

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

    void mergeSort(vector<int>&arr, int left, int right) {
        if (left >= right) {
            return;
        }

        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        mergeArray(arr, left, right);
    }
    vector<int> sortArray(vector<int>& nums) {
        //just use the merge sort algorithm
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};
int main()
{
    std::cout<<"Hello World";

    return 0;
}