/*
Q3110. Score of a String(easy)
You are given a string s. The score of a string is defined as the sum of the 
absolute difference between the ASCII values of adjacent characters.
Return the score of s.

Link:-https://leetcode.com/problems/score-of-a-string/description/

Example 1:

Input: s = "hello"

Output: 13

Explanation:

The ASCII values of the characters in s are: 'h' = 104, 'e' = 101, 'l' = 108, 
'o' = 111. So, the score of s would be |104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13.

Time complexity:- O(n);
space complexity:- O(1);

Constraints:

2 <= s.length <= 100
s consists only of lowercase English letters.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n-1;i++){
           sum+=abs(s[i]-s[i+1]);
        }
        return sum;
    }
};

