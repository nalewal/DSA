/******************************************************************************

1832. Check if the Sentence Is Pangram
Solved
Easy
Topics
premium lock icon
Companies
Hint
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false
 

Constraints:

1 <= sentence.length <= 1000
sentence consists of lowercase English letters.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.length() < 26) return false;
        vector<int> frequency(26, 0);
        int counter = 26;
        for (int i = 0; i < sentence.length(); i++) {
            if (frequency[sentence[i] - 'a'] == 0) {
                frequency[sentence[i] - 'a']++;
                counter--;
            }
            if (counter == 0) return true;
        }
        return false;
    }
};

int main () {
    Solution s;
    string str = "thequickbrownfoxjumpsoverthelazydog";
    string str2 = "leetcode";
    cout << s.checkIfPangram(str) << endl;
    return 0;
    
} 

/**
 * Time complexity will be O(n) and Space complexity will be O(1) as only array has been created of size 26
 * /