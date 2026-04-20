/******************************************************************************

Given a binary array A[] of size N. The task is to arrange the array in increasing order.

Note: The binary array contains only 0 and 1.

Input 1: arr[] = {1, 0, 1, 1, 0}
Output 1: 0 0 1 1 1
Explanation 1: After arranging the elements in increasing order, elements will be as 0 0 1 1 1.

Input 2: arr[] = {1, 0}
Output 2: 0 1
Constraints:
1 <= A.length <= 105
0 <= A[i] <= 1

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class BinarySort {
public:
    vector<int> secondApproach(vector<int> nums) { 
        // Selection Sort 
        for (int step = 0; step < nums.size() - 1; step++) {
            int minIndex = step;
            for (int j = step + 1; j < nums.size(); j++) {
                if (nums[j] < nums[step]) {
                    minIndex = j;
                }
            }
            swap(nums[step], nums[minIndex]);
        }
        
        return nums;
        // Time Complexity = O(n^2)
    }
    vector<int> firstApproach(vector<int> nums) {
        int countOfZero = 0;
        int countOfOne = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) countOfZero++;
            else if (nums[i] == 1) countOfOne++;
        }
        int j = 0;
        while (countOfZero != 0) {
            nums[j++] = 0;
            countOfZero--;
        }
        while (countOfOne != 0) {
            nums[j++] = 1;
            countOfOne--;
        }
        
        return nums;
        // Time Complexity = O(n)
    } 
     vector<int> bsort(vector<int> input) {
// 		return firstApproach(input);
        return secondApproach(input);
     }
};
int main()
{
    BinarySort obj;
    vector<int> arr = {1, 0, 1, 1, 0};
    vector<int> ans = obj.bsort(arr);
    
    
    for (auto k : ans) {
        cout << k << " ";
    }
    
    cout << endl;
    
    
    return 0;
}