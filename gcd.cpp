/* 
GCD of two numbers.(easy)
Given two positive integers a and b, find GCD of a and b.

Link:-https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

Example 1:
Input: 
a = 3
b = 6
Output: 3
Explanation: GCD of 3 and 6 is 3

Example 2:

Input: 
a = 1
b = 1
Output: 1
Explanation: GCD of 1 and 1 is 1

Time Complexity:- O(log(min(a,b)));
space complexity:- O(1);

Constraints:
1 ≤ a, b ≤ 109
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
 
    int gcd(int a, int b) {
        if (b==0) return a;
        return gcd(b,a%b);
    }
};