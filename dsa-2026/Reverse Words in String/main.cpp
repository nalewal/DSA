/******************************************************************************

Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
Example 3:

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
 

Constraints:

1 <= s.length <= 104
s contains English letters (upper-case and lower-case), digits, and spaces ' '.
There is at least one word in s.
 

Follow-up: If the string data type is mutable in your language, can you solve it in-place with O(1) extra space?

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(vector<string>& arr) {
        int n = arr.size();
        for (int i = 0;  i < n / 2; i++) {
            swap(arr[i], arr[n-i-1]);
        }
    } 
    string trimSpaces(string s) {
        int n = s.size();
        int start = 0, end = n - 1;
        while (start < n && s[start] == ' ')
            start++;
        while (end >= start && s[end] == ' ')
            end--;
        string result = "";
        for (int i = start; i <= end; i++)
            result += s[i];
        return result;
    }

    void reverseString(string& s) {
        int size = s.length();
        for (int i = 0; i < size / 2; i++) {
            swap(s[i], s[size-i-1]);
        }
    }
    string bruiteForce(string s) {
        this->trimSpaces(s);
        string ans = "";
        string temp = "";
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (temp != "") {
                    this->reverseString(temp);;
                    ans += temp;
                    temp = "";
                    ans += " ";
                }
            } else {
                temp += s[i];
            }
        }
        
        if (temp != "") {
            this->reverseString(temp);
            ans += temp;
        }
        return ans;
    }
    string reverseWords(string s) {
        s = this->trimSpaces(s);
        cout << " After remove all spaces the string is => " << s << endl;
        vector<string> ans;
        string temp = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                if (temp != "") {
                    ans.push_back(temp);
                    temp = "";
                }
                
            } else {
                temp += s[i];
            }
        }
        
        if (temp != "") {
            ans.push_back(temp);
            temp = "";
        }
        
        this->reverseArray(ans);
        for (int i = 0; i < ans.size(); i++) {
            temp += ans[i];
            if (i != ans.size() - 1)
                temp += " ";
        }
        
        return temp;
        
    }
};

int main()
{
    Solution s;
    string str;
    getline(cin, str);
    cout << "Your current strgin is => " << str << " and length is => " << str.length() << endl;
    string ans = s.bruiteForce(str);
    cout << "After bruiteForce Solution the string is => " << ans << " and length is => " << ans.length() << endl;
    
    string ans2 = s.reverseWords(str);
    cout << "After optimal Solution the string is => " << ans2 << " and length is => " << ans2.length() << endl;
    return 0;
}