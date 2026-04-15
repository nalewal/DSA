/******************************************************************************

A substring is a contiguous (non-empty) sequence of characters within a string.

A vowel substring is a substring that only consists of vowels ('a', 'e', 'i', 'o', and 'u') and has all five vowels present in it.

Given a string word, return the number of vowel substrings in word.

 

Example 1:

Input: word = "aeiouu"
Output: 2
Explanation: The vowel substrings of word are as follows (underlined):
- "aeiouu"
- "aeiouu"
Example 2:

Input: word = "unicornarihan"
Output: 0
Explanation: Not all 5 vowels are present, so there are no vowel substrings.
Example 3:

Input: word = "cuaieuouac"
Output: 7
Explanation: The vowel substrings of word are as follows (underlined):
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
 

Constraints:

1 <= word.length <= 100
word consists of lowercase English letters only.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isStringContainsVowels(vector<int>& vowels) {
        for (int key : vowels) {
            if (key == 0) return false;
        }
        return true;
    }
    int countVowelSubstrings(string word) {
        int totalVowelsSubString = 0;
        for(int i =0; i < word.length(); i++) {
            vector<int> vowels(5, 0);
            for (int j = i; j < word.length(); j++) {
                bool isCons = false;
                switch(word[j]) {
                    case 'a' :
                        vowels[0]++;
                        break;
                    case 'e' :
                        vowels[1]++;
                        break;
                    case 'i' :
                        vowels[2]++;
                        break;
                    case 'o' :
                        vowels[3]++;
                        break;
                    case 'u' :
                        vowels[4]++;
                        break;
                    default : 
                        isCons = true;
                        break;
                }
                if (isCons) break;
                if (isStringContainsVowels(vowels)) totalVowelsSubString++;
            }
        }
        return totalVowelsSubString;
    }
};
int main()
{
    Solution s;
    cout << s.countVowelSubstrings("cuaieuouac") << endl;
    return 0; 
}