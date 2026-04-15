/******************************************************************************

Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

Input: mat = [[1,2,3],
              [4,5,6],
              [7,8,9]]
Output: 25
Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.
Example 2:

Input: mat = [[1,1,1,1],
              [1,1,1,1],
              [1,1,1,1],
              [1,1,1,1]]
Output: 8
Example 3:

Input: mat = [[5]]
Output: 5
 

Constraints:

n == mat.length == mat[i].length
1 <= n <= 100
1 <= mat[i][j] <= 100

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int i = 0;
        int sum = 0;
        while (i < row) {
            sum += mat[i][i];
            i++;
        }
        
        int j = row -1;
        i = 0;
        
        while (i < row && j >= 0) {
            sum += mat[i++][j--];
        }
        
        if (row % 2 != 0)
            sum -= mat[row/2][row/2];
        return sum;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout << "diagonalSum is => " << s.diagonalSum(mat);
    return 0;
}