/******************************************************************************
1323. Maximum 69 Number

You are given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

 

Example 1:

Input: num = 9669
Output: 9969
Explanation: 
Changing the first digit results in 6669.
Changing the second digit results in 9969.
Changing the third digit results in 9699.
Changing the fourth digit results in 9666.
The maximum number is 9969.
Example 2:

Input: num = 9996
Output: 9999
Explanation: Changing the last digit 6 to 9 results in the maximum number.
Example 3:

Input: num = 9999
Output: 9999
Explanation: It is better not to apply any change.
 

Constraints:

1 <= num <= 104
num consists of only 6 and 9 digits.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Maximum69Number {
public:
	int solve(int num) {
    		vector<int> nums;
        int temp = num;

        while (num > 0) {
            nums.push_back(num % 10);
            num /= 10;
        }
        

        // 9669 = 9, 6, 6, 9
        // find last index of 6
        int index = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 6) {
                index = i;
            }
        }

        if (index == -1) return temp;
        // else make new number by changing the last 6
        nums[index] = 9;
        long newNumber = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            cout << nums[i] << endl;
            newNumber = newNumber * 10 + nums[i];
        } 

        return newNumber;
      }
};
int main()
{
    Maximum69Number s;
    int n = s.solve(9669);
    cout << " number is => " << n << endl;
    return 0;
}