/******************************************************************************
242. Valid Anagram
Easy
Topics
premium lock icon
Companies
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false

 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        /*
        This Solution will not work for unicode characters as emojis or non english letters
        vector<int> frequencyOne(26, 0);
        vector<int> frequencyTwo(26, 0);
        
        for(int i = 0; i < s.length(); i++) {
            frequencyOne[s[i] - 'a']++;
            frequencyTwo[t[i] - 'a']++;
        }
        
        for (int i = 0; i < 26; i++) {
            if (frequencyOne[i] != frequencyTwo[i]) return false;
        }
        */
        
        // Unicode characters friendly Solution. (Usiong map)
        
        unordered_map<char, int> frequency;
        
        for (int c : s) {
            frequency[c]++;
        }
        
        for (int c : t) {
            frequency[c]--;
            if (frequency[c] < 0) {
                return false;
            }
        }
        
        
        return true;
        
    }
};

int main()
{
    Solution ss;
    string s = "silent";
    string t = "listen";
    cout << ss.isAnagram(s,t) << endl;

    return 0;
}