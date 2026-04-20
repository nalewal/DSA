/******************************************************************************
1502. Can Make Arithmetic Progression From Sequence

A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

 

Example 1:

Input: arr = [3,5,1]
Output: true
Explanation: We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.
Example 2:

Input: arr = [1,2,4]
Output: false
Explanation: There is no way to reorder the elements to obtain an arithmetic progression.
 

Constraints:

2 <= arr.length <= 1000
-106 <= arr[i] <= 106

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void sortArray(vector<int>& arr, int left, int right) {
        if (left >= right) {
            return;
        }
        int mid = left + (right - left) / 2;
        sortArray(arr, left, mid);
        sortArray(arr, mid + 1, right);
        mergeArray(arr, left, right);
    }
    void mergeArray(vector<int>& arr, int left, int right) {
        int mid = left + (right - left) / 2;
        int len1 = mid - left + 1;
        int len2 = right - mid;
        vector<int> leftArr(len1), rightArr(len2);

        for (int i = 0; i < len1; i++) {
            leftArr[i] = arr[left+i];
        }
        for (int i =0; i < len2; i++) {
            rightArr[i] = arr[mid+i+1];
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
    
    bool sortingApproach(vector<int>& arr) {
        int n = arr.size();
        sortArray(arr, 0, n - 1);
        int diff = abs(arr[0] - arr[1]);    
        for (int i = 1; i < n - 1; i++) {
            int newDiff = abs(arr[i] - arr[i+1]);
            if (diff != newDiff) return false;
        }
        return true;
    }
    bool hashTableSolution(vector<int>& arr) {
        int n = arr.size();
        if (n <= 2) return true;
        
        map<int, int> apMap;
        for (int i = 0; i < n; i++) {
            apMap[arr[i]]++;
        }
         
        int minElement = *min_element(arr.begin(), arr.end());
        int maxElement = *max_element(arr.begin(), arr.end());
        
        if ((maxElement - minElement) % (n - 1) != 0 ) return false;
        int diff = (maxElement - minElement) / (n - 1);
        cout << "diff : " << diff <<endl;
        int i = 0;
        for (auto k : apMap) {
            int expectedValue = minElement + i * diff;
            if (expectedValue != k.first) return false;
            i++;
        }
        
        return true;
        
    }
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        // return sortingApproach(arr);
        return hashTableSolution(arr);
    }
};



int main()
{
    Solution s;
    vector<int> arr = {3,5,1};
    cout << (s.canMakeArithmeticProgression(arr) ? "Yes" : "No") << endl;
    return 0;
}






