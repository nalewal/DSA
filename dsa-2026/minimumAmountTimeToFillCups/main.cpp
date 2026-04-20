/******************************************************************************
2335. Minimum Amount of Time to Fill Cups

You have a water dispenser that can dispense cold, warm, and hot water. Every second, you can either fill up 2 cups with different types of water, or 1 cup of any type of water.

You are given a 0-indexed integer array amount of length 3 where amount[0], amount[1], and amount[2] denote the number of cold, warm, and hot water cups you need to fill respectively. Return the minimum number of seconds needed to fill up all the cups.

 

Example 1:

Input: amount = [1,4,2]
Output: 4
Explanation: One way to fill up the cups is:
Second 1: Fill up a cold cup and a warm cup.
Second 2: Fill up a warm cup and a hot cup.
Second 3: Fill up a warm cup and a hot cup.
Second 4: Fill up a warm cup.
It can be proven that 4 is the minimum number of seconds needed.
Example 2:

Input: amount = [5,4,4]
Output: 7
Explanation: One way to fill up the cups is:
Second 1: Fill up a cold cup, and a hot cup.
Second 2: Fill up a cold cup, and a warm cup.
Second 3: Fill up a cold cup, and a warm cup.
Second 4: Fill up a warm cup, and a hot cup.
Second 5: Fill up a cold cup, and a hot cup.
Second 6: Fill up a cold cup, and a warm cup.
Second 7: Fill up a hot cup.
Example 3:

Input: amount = [5,0,0]
Output: 5
Explanation: Every second, we fill up a cold cup.
 

Constraints:

amount.length == 3
0 <= amount[i] <= 100


1,4,2
0,3,2 -> 1
0,2,1 -> 2
0,1,0 -> 3
0,0,0 -> 4

5,4,4
4,3,4 -> 1
3,2,4 -> 1
2,1,4 -> 3
1,0,4 -> 4
0,0,3 -> 5
0,0,2 -> 6
0,0,1 -> 7
0,0,0 -> 8

Approach -> find the maximum and minimum or second maximum values then fill the maximum and second maximum number of cup at one time then
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*void printArray(vector<int> arr) {
        cout << endl;
        for (int i : arr) {
            cout << i << " ";
        }
        cout << endl;
    }*/
    vector<int> maxIndex(vector<int> arr) {
        int maximum = -1;
        int maxIndex = -1;
        int secondMaximumIndex = -1;
        int secondMaximum = -1;
        int thirdMaximumIndex = -1;
        int thirddMaximum = -1;
        vector<int> indexArray;
        for (int i = 0; i < 3; i++) {
            if (maximum < arr[i]) {
                maximum = arr[i];
                maxIndex = i;
            }
        }
        
        for (int i = 0; i < 3; i++) {
            if (secondMaximum < arr[i] && i != maxIndex) {
                secondMaximum = arr[i];
                secondMaximumIndex = i;
            }
        }
        
        for (int i = 0; i < 3; i++) {
            if (thirddMaximum < arr[i] && i != secondMaximumIndex && i != maxIndex) {
                thirddMaximum = arr[i];
                thirdMaximumIndex = i;
            }
        }
        
        indexArray.push_back(maxIndex);
        indexArray.push_back(secondMaximumIndex);
        indexArray.push_back(thirdMaximumIndex);
        /*cout << endl << "******* print min max and whole array *********" << endl;
        printArray(arr);
        
        cout << " maximum is => " << maximum << " i : " << maxIndex << " second maximum is " << secondMaximum << " i : " << secondMaximumIndex << endl;*/
        
        return indexArray;
    } 
    int firstApproach( vector<int>& amount) {
        vector<int> indexArray = maxIndex(amount);
        int seconds = 0;
        while (true) {
            if (amount[indexArray[0]] == 0 && amount[indexArray[1]] == 0) {
                break;
            }
            
            if (amount[indexArray[0]] != 0 && amount[indexArray[1]] != 0) {
                seconds++;
                amount[indexArray[0]]--;
                amount[indexArray[1]]--;
            } else if(amount[indexArray[0]] != 0) {
                amount[indexArray[0]]--;
                seconds++;
            }
            indexArray = maxIndex(amount);
        }
        
        return seconds;
    }
    void sortArray(vector<int> &amount) {
        vector<int> indexArray = maxIndex(amount);
        int firstMax = amount[indexArray[0]];
        int secondMax = amount[indexArray[1]];
        int thirdMax = amount[indexArray[2]];
        
        amount[0] = firstMax;
        amount[1] = secondMax;
        amount[2] = thirdMax;
    }
    
    int secondApproach(vector<int> amount) {
        sortArray(amount);
        int seconds = 0;
        while (true) {
            if (amount[0] == 0 && amount[1] == 0) {
                break;
            }
            if (amount[0] != 0 && amount[1] != 0) {
                seconds++;
                amount[0]--;
                amount[1]--;
            } else if (amount[0] != 0) {
                amount[0]--;
                seconds++;
            } else if (amount[1] != 0) {
                amount[1]--;
                seconds++;
            }
            sortArray(amount);
        }
        return seconds;
    }
    int fillCups(vector<int>& amount) {
        // return firstApproach(amount);
        return secondApproach(amount);
    }
};
int main()
{
    Solution s;
    vector<int> arr = {1,4,2};
    cout << "minimum number of seconds are : " << s.fillCups(arr) << endl;
    return 0;

   
}