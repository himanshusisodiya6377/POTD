/* 
Happy Number 202.(easy)

Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

Link:-https://leetcode.com/problems/happy-number/description/

Example 1:

Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

Time Complexity:- O(n*k); where k is number of digits in number
space complexity:- O(1);

Constraints:

1 <= n <= 231 - 1
bank[i][j] is either '0' or '1'.
*/
class Solution {
public:
    bool isHappy(int n) {
            while(n>0){
                 int sum=0;
                while(n>0){
                   int x=n%10;
                   sum+=x*x;
                   n/=10;
                }
               if(sum==1) return true;
               else if(sum==4) return false;
               n=sum;
            }
            return false;
        } 
};