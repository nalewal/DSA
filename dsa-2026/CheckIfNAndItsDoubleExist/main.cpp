/******************************************************************************

Given an array arr of integers, check if there exist two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
 

Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: For i = 0 and j = 2, arr[i] == 10 == 2 * 5 == 2 * arr[j]
Example 2:

Input: arr = [3,1,7,11]
Output: false
Explanation: There is no i and j that satisfy the conditions.
 

Constraints:

2 <= arr.length <= 500
-103 <= arr[i] <= 103

*******************************************************************************/
#include <bits/stdc++.h> 
using namespace std;
class Solution {
private:
    void mergeSort(vector<int>&arr, int left, int right) {
        if (left >= right) {
            return;
        }
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        mergeArray(arr, left, right);
    }
    void mergeArray(vector<int>&arr, int left, int right) {
        int mid = left + (right - left) / 2;
        int len1 = mid - left + 1;
        int len2 = right - mid;
        vector<int> leftArr(len1), rightArr(len2);
        
        for (int i = 0; i < len1; i++) {
            leftArr[i] = arr[left + i];
        }
        for (int i = 0; i < len2; i++) {
            rightArr[i] = arr[mid + i + 1];
        }
        
        int index1 = 0, index2 = 0, mainIndex = left;
        while (index1 < len1 && index2 < len2) {
            if (leftArr[index1] < rightArr[index2]) {
                arr[mainIndex++] = leftArr[index1++];
            } else {
                arr[mainIndex++] = rightArr[index2++];
            }
        }
        
        while (index1 < len1) {
            arr[mainIndex++] = leftArr[index1++];
        }
        while (index2 < len2) {
            arr[mainIndex++] = rightArr[index2++];
        }
    } 
public:
    bool optimalSolutionByHashTable(vector<int>& arr) {
        unordered_map<int, bool> presentArr;
        int countOfZero = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                countOfZero++;
            } else {
                presentArr[arr[i]] = true;
            }
            
        }
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0 && (presentArr[arr[i] * 2])) return true;
        }

        if (countOfZero > 1) return true;
        return false;
    }
    bool optimalSolutionBySorting(vector<int>& arr) {
        mergeSort(arr, 0, arr.size()-1);
        
        
        // use binary search
        for (int i = 0; i < arr.size(); i++) {
            int target = 2 * arr[i];
            int start = 0, end = arr.size() - 1;
            
            
            while (start <= end) {
                int mid = start + (end- start) / 2;
                if (mid != i && arr[mid] == target) {
                    return true;    
                } else if (arr[mid] < target) {
                    start = mid + 1;            
                } else {
                    end = mid - 1;
                }
            }
            // int n = arr.size();

            // for (int i = 0; i < n; i++) {
            //     bool isNegative = false;
            //     int target = 2 * arr[i];
            //     if (arr[i] < 0) {
            //         target = arr[i] / 2;
            //         isNegative = true;
            //     }
                

            //     int left = i + 1;
            //     if (isNegative) {
            //         while (left < n && arr[left] >= target) {
            //             if (arr[left] == target) return true;
            //             left++;
            //         }
            //     } else {
            //         while (left < n && arr[left] <= target) {
            //             if (arr[left] == target) return true;
            //             left++;
            //         }
            //     }
                
            // }

        }
        return false;
    }
    bool bruteForceSolution(vector<int>& arr) {
        // use two pointers 
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i+1; j < arr.size(); j++) {
                if ((arr[i] == 2 * arr[j]) || arr[j] == 2*arr[i]) {
                    return true;
                }
            }
        }
        return false;
    }
    bool checkIfExist(vector<int>& arr) {
        // return bruteForceSolution(arr);
        // return optimalSolutionByHashTable(arr);
        return optimalSolutionBySorting(arr);
    }
};

int main()
{
    Solution s;
    vector<int> arr = {10,2,5,3};
    cout << (s.checkIfExist(arr) ? " YES " : " No ") << endl;
    return 0;
}