#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                ans.push_back("FizzBuzz");
            } else if (i % 5 == 0) {
                ans.push_back("Buzz");
            } else if (i % 3 == 0) {
                ans.push_back("Fizz");
            } else {
                ans.push_back(std::to_string(i));
            }
        }
        return ans;
    }
};

int main () {
    Solution s;
    int n;
    cin >> n;
    std::vector<string> ans = s.fizzBuzz(n);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ", ";
    } 
    cout << endl;
    
    return 0;
}