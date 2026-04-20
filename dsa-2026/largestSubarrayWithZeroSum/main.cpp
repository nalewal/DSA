/******************************************************************************

Largest subarray with 0 sum
Difficulty: MediumAccuracy: 41.84%Submissions: 463K+Points: 4Average Time: 20m
Given an array arr[] containing both positive and negative integers, the task is to find the length of the longest subarray with a sum equals to 0.

Note: A subarray is a contiguous part of an array, formed by selecting one or more consecutive elements while maintaining their original order.

Examples:

Input: arr[] = [15, -2, 2, -8, 1, 7, 10, 23]
Output: 5
Explanation: The longest subarray with sum equals to 0 is [-2, 2, -8, 1, 7].
Input: arr[] = [2, 10, 4]
Output: 0
Explanation: There is no subarray with a sum of 0.
Input: arr[] = [1, 0, -4, 3, 1, 0]
Output: 5
Explanation: The longest subarray with sum equals to 0 is [0, -4, 3, 1, 0]
Constraints:
1 ≤ arr.size() ≤ 106
−103 ≤ arr[i] ≤ 103



*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
   int bruteForceSolution(vector<int>& arr) {
        int maximumLength = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int maxSum = 0;
            for (int j = i; j < n; j++) {
                maxSum += arr[j];
                if (maxSum == 0) {
                    cout << " Hi" << endl;
                    int currLength = (j-i) + 1;
                    if (currLength > maximumLength) {
                        maximumLength = currLength;
                    }
                }
            }
        }
        return maximumLength;
    }
    int optimalSolution(vector<int>& arr) {
        // we will use prefix sum approach and whenver i will get the prefix sum same as again i wll sure that i have traversed one subaaray that have zero sum
        int n = arr.size();
        unordered_map<int, int> prefixSumToIndexMapping;
        int runningSum = 0;
        int maximumLength = 0;
        for (int i = 0; i < n; i++) {
            runningSum += arr[i];
            
            if (runningSum == 0) {
                int length = i + 1;
                maximumLength = max(maximumLength, length);
                
            } else if (prefixSumToIndexMapping.count(runningSum) != 0) {
                int veryFirstIndexAtOccureRunning = prefixSumToIndexMapping[runningSum];
                int length = i - veryFirstIndexAtOccureRunning;
                maximumLength = max(maximumLength, length);
            } else {
                prefixSumToIndexMapping[runningSum] = i;    
            }
        }
        return maximumLength;
    }
  public:
    int maxLength(vector<int>& arr) {
        // code here
        // return bruteForceSolution(arr);
        return optimalSolution(arr);
    }
};

int main()
{
    Solution s;
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    
    cout << " ans : " << s.maxLength(arr) << endl;

    return 0;
    
    
    
    
    
}