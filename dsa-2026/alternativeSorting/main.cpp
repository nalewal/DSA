/******************************************************************************
Given an array arr of distinct integers. Rearrange the array in such a way that the first element is the largest and the second element is the smallest, the third element is the second largest and the fourth element is the second smallest, and so on.

Examples:

Input: arr[] = [7, 1, 2, 3, 4, 5, 6]
Output: [7, 1, 6, 2, 5, 3, 4]
Explanation: The first element is first maximum and second element is first minimum and so on.
Input: arr[] = [1, 6, 9, 4, 3, 7, 8, 2]
Output: [9, 1, 8, 2, 7, 3, 6, 4]
Explanation: The first element is first maximum and second element is first minimum and so on.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105




*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {

  public:
    void printArray(vector<int> arr) {
        cout << " ********** printing *******" << endl;
        for (int i : arr) {
            cout << i << " "; 
        }
        
        cout << endl << " ************** " << endl;
    }
    vector<int> arrangeInAlternateOrder(vector<int>& arr) {
        vector<int> output(arr.size());
        int start = 0, end = arr.size() - 1;
        int j = 0;
        while (start <= end) {
            output[j++] = arr[start];
            if (start != end) {
                output[j++] = arr[end];
            }
            
            start++;
            end--;
        }
        
        return output;
    }
    void merge(vector<int> &arr, int left, int right) {
        int mid = left + (right - left) / 2;
        int len1 = mid - left + 1;
        int len2 = right - mid;
        int mainArrayIndex = left;
        vector<int> first(len1), second(len2);
        
        for (int i = 0; i < len1; i++) {
            first[i] = arr[i+mainArrayIndex];
        }
        mainArrayIndex = mid + 1;
        for (int i = 0; i < len2; i++) {
            second[i] = arr[mainArrayIndex+i];
        }
        
        int index1 = 0, index2 = 0;
        mainArrayIndex = left;
        while (index1 < len1 && index2 < len2) {
            if (first[index1] > second[index2]) {
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
        mergeSort(arr, mid+1, right);
        merge(arr, left, right);
    }
    vector<int> bruteForce(vector<int>& arr) {
        // Use Any Sort from Selection, inserttion or bubble Sort
        // Bubble sort 
        for (int step = 0; step < arr.size(); step++) {
            bool isSwapped = false;
            for (int i = 0; i < arr.size() - step - 1; i++) {
                if (arr[i] < arr[i+1]) {
                    swap(arr[i], arr[i+1]);
                    isSwapped = true;
                }
            }
            if (!isSwapped) break;
        }
        
        /*cout << " ****** printing the array *****" << endl;
        for (int i : arr) {
            cout << i << " ";
        }
        
        cout << endl << " ****** *****" << endl;*/
        
        // Now i have new array in descending order suppose {7, 6, 5, 4, 3, 2, 1} , Take mid and run the loop from start to mid and end to mid alternativly
        return arrangeInAlternateOrder(arr);
        // Time Complexity = O(n^2) Very Bad
        
    }
    
    vector<int> optimalSolution(vector<int>& arr) {
        // Use merge sort algorithm to sort
        mergeSort(arr, 0 , arr.size()-1);
        printArray(arr);
        return arrangeInAlternateOrder(arr);;
    }
    
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        // Brute Force : {7,6,5,4,3,2,1} => {7, 1, 6, 2, 5 , 3 , 4}
        // return bruteForce(arr);
        return optimalSolution(arr);
    }
};


int main()
{
    Solution s;
    vector<int> arr = {1, 6, 9, 4, 3, 7, 8, 2};
    
    vector<int> ans = s.alternateSort(arr);
    
    for (auto k : ans) {
        cout << k << " ";
    }

    return 0;
}