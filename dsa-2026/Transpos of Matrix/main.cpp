/******************************************************************************

Given a 2D integer array matrix, return the transpose of matrix.

The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.


Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
Example 2:

Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 1000
1 <= m * n <= 105
-109 <= matrix[i][j] <= 109

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        
        vector<vector<int>> ans(column, vector<int>(row, 0));
        
        for (int i = 0; i < column; i++) {
            for (int j = 0; j < row; j++) {
                ans[i][j] = matrix[j][i];
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    int row;
    int column;
    
    cout << "Enter Row => ";
    cin >> row;
    cout << endl;
    cout <<"Enter Column number => ";
    cin >> column;
    cout << endl;
    vector<vector<int>> mat(row, vector<int>(column,0));
    
   
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> mat[i][j];
        }
    }
    
    cout << "Current Matrix is => " << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    vector<vector<int>> ans = s.transpose(mat);
    
    cout << "Transpose of Matrix is => " << endl;
    
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}