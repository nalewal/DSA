/******************************************************************************
204. Count Primes

Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int number) {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
    
    int countPrimes(int n) {
        /*int output = 0;
        if (n > 2) {
            output++;
        }
        for (int i = 3; i < n; i+=2) {
            if (isPrime(i)) {
                output++;
            }
        }
        return output;*/
        //Use Sieve of Eratosthenes.
        vector<bool> allPrimes(n+1, true);
        for (int p = 2; p * p <= n; p++) {
            if (allPrimes[p]) {
                for (int i = p * p; i <= n; i += p) {
                    allPrimes[i] = false;
                }
            }
        }
        int primes = 0;
        for (int i = 2; i < allPrimes.size() -1; i++) {
            if (allPrimes[i]) {
                primes++;
            }
        }
        
        return primes;
    }
};
int main()
{
    Solution s;
    cout << " all primes count is => " << s.countPrimes << endl;
    return 0;
}