/******************************************************************************
You are given an array of integers arr[]. You have to reverse the given array.

Note: Modify the array in place.

Examples:

Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]
Explanation: The elements of the array are [1, 4, 3, 2, 6, 5]. After reversing the array, the first element goes to the last position, the second element goes to the second last position and so on. Hence, the answer is [5, 6, 2, 3, 4, 1].
Input: arr = [4, 5, 2]
Output: [2, 5, 4]
Explanation: The elements of the array are [4, 5, 2]. The reversed array will be [2, 5, 4].
Input: arr = [1]
Output: [1]
Explanation: The array has only single element, hence the reversed array is same as the original.
Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 105

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // int start = 0; 
        // int end = arr.size()-1;
        // while (start < end) {
        //     swap(arr[start], arr[end]);
        //     start++;
        //     end--;
        // }
        
        // other solution with for loop i = 0, n = 5 - 1 - 0, i = 1, n = 4 - 3
        int n = arr.size();
        for (int i = 0; i < n / 2; i++) { 
            swap(arr[i], arr[n-1-i]);
        }
        
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1, 4, 3, 2, 6, 5, 7};
    s.reverseArray(arr);
    
    for (auto x : arr) {
        cout << x << ", ";
    }
    
    cout << endl;
    return 0;
}