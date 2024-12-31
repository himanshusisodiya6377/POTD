/* 
Minimum moves to convert a string 2027.(easy)

You are given a string s consisting of n characters which are either 'X' or 'O'.
A move is defined as selecting three consecutive characters of s and converting them to 'O'. Note that if a move is applied to the character 'O', it will stay the same.
Return the minimum number of moves required so that all the characters of s are converted to 'O'.

Link:-https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

Example 1:

Input: s = "XXX"
Output: 1
Explanation: XXX -> OOO
We select all the 3 characters and convert them in one move.

Time Complexity:- O(n);
space complexity:- O(1);

Constraints:
3 <= s.length <= 1000
s[i] is either 'X' or 'O'.
*/
class Solution {
public:
    int minimumMoves(string s) {
        int num=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='X') {
                i+=2;
                num++;
            }
        }
        return num;
    }
};