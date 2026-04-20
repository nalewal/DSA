/******************************************************************************
628. Maximum Product of Three Numbers

Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

 

Example 1:

Input: nums = [1,2,3]
Output: 6
Example 2:

Input: nums = [1,2,3,4]
Output: 24
Example 3:

Input: nums = [-1,-2,-3]
Output: -6
 

Constraints:

3 <= nums.length <= 104
-1000 <= nums[i] <= 1000

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
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
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return -1;
        mergeSort(nums, 0, n-1);

        int positiveIndex = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                positiveIndex = i;
                break;
            }
        }

        if (positiveIndex == -1) {
            return nums[n-1] * nums[n-2] * nums[n-3];
        } else {
            int productOfFirstTwoNumbersWithLast = nums[0] * nums[1] * nums[n-1];
            int productOfLastThreeNumbers = nums[n-1] * nums[n-2] * nums[n-3];

            return max(productOfFirstTwoNumbersWithLast, productOfLastThreeNumbers);
        }


        // int maximumProduct = nums[0] * nums[1] * nums[2];
        
        // for (int i = 3; i < nums.size(); i++) {
        //     int newProduct = nums[i] * nums[i-1] * nums[i-2];
        //     if (newProduct > maximumProduct) {
        //         maximumProduct = newProduct;
        //     }
        // }
        
        // return maximumProduct;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {1,2,3,4};
    cout << " product is " << s.maximumProduct(arr);
    return 0;
}