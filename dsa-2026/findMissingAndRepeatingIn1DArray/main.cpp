/******************************************************************************

Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2,....,N} is missing and one number 'B' occurs twice in array. Find these two numbers.



Input: Arr[] = {2, 2}
Output: 2 1

Input: Arr[] = {1, 3, 3}
Output: 3 2

Constraints:
2 ≤ N ≤ 105
1 ≤ Arr[i] ≤ N
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class FindTwoElement {
public:
    vector<int> solve(vector<int> input) {
        // solev directly by the unordered map
        int n = input.size();
        unordered_map<int, int> frequency;
        for (int i = 1; i <= n; i++) {
            frequency[i] = 0;
        }
        vector<int> output;
        for (int i = 0; i < n; i++) {
            frequency[input[i]]++;
        }
        
        // cout << endl << " printing frequencies => " <<endl;
        // for (auto f : frequency) {
        //     cout << f.first << " occures " << f.second << " times " << endl;
        // }
        // cout << endl;
        int repeatingElement = -1;
        int missingElement = -1;
        for (auto k : frequency) {
            if (k.second == 2) repeatingElement = k.first;
            if (k.second == 0) missingElement = k.first;
        }
        
        output.push_back(repeatingElement);
        output.push_back(missingElement);
        
        return output;
     }
};
int main()
{
    FindTwoElement obj;
    vector<int> arr = {1,3,2,2};
    vector<int> ans = obj.solve(arr);
    for (auto k : ans) {
        cout << k << ", "; 
    }
    cout << endl;

    return 0;
}