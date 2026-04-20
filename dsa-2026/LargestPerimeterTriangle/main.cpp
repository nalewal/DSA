/******************************************************************************
976. Largest Perimeter Triangle

Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, return 0.

 

Example 1:

Input: nums = [2,1,2]
Output: 5
Explanation: You can form a triangle with three side lengths: 1, 2, and 2.
Example 2:

Input: nums = [1,2,1,10]
Output: 0
Explanation: 
You cannot use the side lengths 1, 1, and 2 to form a triangle.
You cannot use the side lengths 1, 1, and 10 to form a triangle.
You cannot use the side lengths 1, 2, and 10 to form a triangle.
As we cannot use any three side lengths to form a triangle of non-zero area, we return 0.
 

Constraints:

3 <= nums.length <= 104
1 <= nums[i] <= 106

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // void printArray(vector<int> arr) {
    //     cout << endl;
    //     for (int i : arr) {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    // }
    void mergeArray(vector<int>& arr, int left, int right) {
        int mid = left + (right - left) / 2;

          int len1 = mid - left + 1;
          int len2 = right - mid;
          int mainArrayIndex = left;
          
          vector<int> leftArr(len1), rightArr(len2);

          for (int i = 0; i < len1; i++) {
                leftArr[i] = arr[mainArrayIndex+i];
          }
          
          mainArrayIndex = mid + 1;

          for (int i = 0; i < len2; i++) {
            rightArr[i] = arr[mainArrayIndex+i];
          }

          int index1 = 0, index2 = 0;
          mainArrayIndex = left;
          while (index1 < len1 && index2 < len2) {
            if (leftArr[index1] > rightArr[index2]) {
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
    void sortArray(vector<int>& nums, int left, int right) {        
        if (left >= right) {
            return;
        }
        int mid = left + (right - left) / 2;
        // sort left part of the array 
        sortArray(nums, left, mid);
        // ssort right part
        sortArray(nums, mid + 1, right);
        mergeArray(nums, left, right);
    }
    bool validTrianle(int a, int b, int c) {

        if ( (b + c) > a) {
            return true;
        }
        return false;
    }
    int largestPerimeter(vector<int>& nums) {
        sortArray(nums, 0, nums.size()-1);
        int maxPerimeter = 0;
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];

        if (validTrianle(a, b , c)) {
            maxPerimeter = (a + b + c);
        }

        for (int i = 3; i < nums.size(); i++) {
            c = nums[i];
            b = nums[i-1];
            a = nums[i-2];
            if (validTrianle(a,b,c)) {
                int newPerimeter = (a + b + c);
                if (newPerimeter > maxPerimeter) {
                    maxPerimeter = newPerimeter;
                }
            }
        }

        return maxPerimeter;

    }
};
int main()
{
    Solution s;
    vector<int> arr = {1,2,1,10};
    // s.sortArray(arr, 0, arr.size()-1);
    // s.printArray(arr);
    cout << " max perimeter is " << s.largestPerimeter(arr) << endl;
    return 0;
}