/******************************************************************************

You are given an array arr[], containing the IDs of users in chronological order of their occurrences. Find the first user who has exactly k occurrences.
If no such user exists, return -1.

Examples:

Input: arr[] = [1, 7, 4, 3, 4, 8, 7] , k = 2
Output: 7
Explanation: Both 7 and 4 occur 2 times. But 7 is the first that occurs 2 times.  
Input: arr[] = [4, 1, 6, 1, 6, 4] , k = 1 
Output: -1 
Explanation: No one occurs exactly 1 time.
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).

Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 106

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;


class Solution {
  private:
    
    int bruteForceSolution(vector<int>& arr, int k) {
        // int n = arr.size();
        // if (k == 1 && n == 1) return arr[0]; 
        // int frequency = -1;
        // for (int i = 0; i < n; i++) {
        //     frequency = 1;
        //     for (int j = i+1; j < n; j++) {
        //         if (arr[i] == arr[j]) {
        //             frequency++;
        //             if (frequency == k) return arr[j];
        //         }
        //     }
        // }
        return -1;
        // only 88 test cases passed out of 1100
        
        
        
        // sort(arr.begin(), arr.end());
    }
    
    int optimalSolution(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> frequency;
        
        for (int i = 0; i < n; i++) {
            frequency[arr[i]]++;
        }
        
        for (int i = 0; i < n; i++) {
            if (frequency[arr[i]] == k) return arr[i];
        }
        return -1;
    }
  public:
    int firstElement(vector<int>& arr, int k) {
        // write code here
        return optimalSolution(arr, k);
    }
};
int main()
{
   Solution s;
   vector<int> arr = {/*1, 7, 4, 3, 4, 8, 7*/4, 1, 6, 1, 6, 4};
   
   cout << " ans : " << s.firstElement(arr, 1);

    return 0;
    
    
    
    
    
}