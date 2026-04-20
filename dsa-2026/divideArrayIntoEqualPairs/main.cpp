/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

class Solution {
private:
    bool hashTableSolution(vector<int>& nums) {
        unordered_map<int, int> frequency;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            unordered_map[arr[i]]++;
        }
        
        for (auto k : frequency) {
            if ((k.second % 2) != 0) return false;
        }
        
        return true;
    }
public:
    bool divideArray(vector<int>& nums) {
        return hashTableSolution(nums);
    }   
};
int main()
{
    std::cout<<"Hello World";

    return 0;
}