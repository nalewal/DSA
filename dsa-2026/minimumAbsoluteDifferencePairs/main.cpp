/******************************************************************************
1200. Minimum Absolute Difference

Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements.

Return a list of pairs in ascending order(with respect to pairs), each pair [a, b] follows

a, b are from arr
a < b
b - a equals to the minimum absolute difference of any two elements in arr
 

Example 1:

Input: arr = [4,2,1,3]
Output: [[1,2],[2,3],[3,4]]
Explanation: The minimum absolute difference is 1. List all pairs with difference equal to 1 in ascending order.
Example 2:

Input: arr = [1,3,6,10,15]
Output: [[1,3]]
Example 3:

Input: arr = [3,8,-10,23,19,-4,-14,27]
Output: [[-14,-10],[19,23],[23,27]]
 

Constraints:

2 <= arr.length <= 105
-106 <= arr[i] <= 106

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printArray(vector<int> arr) {
        cout << "***** printing Array *****" << endl;
        for (int i : arr) {
            cout << i << " ";
        }
        
        cout << endl << "******************" << endl;
        
    }
     void mergeTwoSortedList(vector<int> &arr, int left, int right) {
         int mid = left + (right - left) / 2;
         int len1 = mid - left + 1;
         int len2 = right - mid;
         int mainArrayIndex = left;
        //  intitlize two array empty array
        vector<int> first(len1), second(len2);
        for (int i = 0; i < len1; i++) {
            first[i] = arr[mainArrayIndex++];
        }
        mainArrayIndex = mid + 1;
        for (int i = 0; i < len2; i++) {
            second[i] = arr[mainArrayIndex++];
        }
        mainArrayIndex = left;
        int index1 = 0, index2 = 0;
        
        while (index1 < len1 && index2 < len2) {
            if (first[index1] < second[index2]) {
                arr[mainArrayIndex++] = first[index1++];
            } else {
                arr[mainArrayIndex++] = second[index2++];
            }
        }
        while (index1 < len1) {
            arr[mainArrayIndex++] = first[index1++];
        }
        while (index2 < len2) {
            arr[mainArrayIndex++] = second[index2++];
        }
     } 
     void mergeSort(vector<int> &arr, int left, int right) {
         if (left >= right) {
             return;
         }
         int mid = left + (right - left) / 2;
         mergeSort(arr, left, mid);
         mergeSort(arr, mid + 1, right);
         mergeTwoSortedList(arr, left, right);
     }
    int minDiffBetweenPairs(vector<int> &arr) {
        // sort the array first by using merge sort
        mergeSort(arr, 0, arr.size() - 1);
        // printArray(arr);
        int minDiff = abs(arr[0]-arr[1]);
        
        for (int i = 1; i < arr.size() - 1; i++) {
            int Diff = abs(arr[i] - arr[i+1]);
            if (minDiff > Diff) {
                minDiff = Diff;
            }
        }
        return minDiff;
    }
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> output;
        int minDiff = minDiffBetweenPairs(arr);
        // printArray(arr);
        for (int i = 0; i < arr.size() - 1; i++) {
            int Diff = abs(arr[i] - arr[i+1]);
            if (minDiff == Diff) {
                output.push_back({arr[i], arr[i+1]});
            }
        }
        return output;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {4,2,1,3};
    
    // int minDiffBetweenPair = minDiffBetweenPairs(arr); 
    vector<vector<int>> pairsArray = s.minimumAbsDifference(arr);
    for (auto &row : pairsArray) {
        cout << " { " << row[0] << ", " << row[1] << " } ";
    }
    return 0;
}