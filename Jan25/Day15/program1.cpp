/* 
Minimum Number of Operations to Move All Balls to Each Box. leetcode 1769 (medium)

You have n boxes. You are given a binary string boxes of length n, where boxes[i] is '0' if the ith box is empty, and '1' if it contains one ball.
In one operation, you can move one ball from a box to an adjacent box. Box i is adjacent to box j if abs(i - j) == 1. Note that after doing so, there may be more than one ball in some boxes.
Return an array answer of size n, where answer[i] is the minimum number of operations needed to move all the balls to the ith box.
Each answer[i] is calculated considering the initial state of the boxes.

Link:-https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/

Example 1:

Input: boxes = "110"
Output: [1,1,3]
Explanation: The answer for each box is as follows:
1) First box: you will have to move one ball from the second box to the first box in one operation.
2) Second box: you will have to move one ball from the first box to the second box in one operation.
3) Third box: you will have to move one ball from the first box to the third box in two operations, and move one ball from the second box to the third box in one operation.

Time Complexity:- O(n);
space complexity:- O(n);

i solved this problem with O(n^2) time complexity than i solved it with tc of O(n)

Constraints:

n == boxes.length
1 <= n <= 2000
boxes[i] is either '0' or '1'.
*/
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>pre(n,0);
        
        // vector<int>suff(n,0);
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(boxes[j]=='1'){
        //             pre[i]+=abs(j-i);
        //         }
        //     }
        // }
        //optimise
        int one=boxes[0]=='1';
        
        for(int i=1;i<n;i++){//prefix sum calculation
             pre[i]=pre[i-1]+one;
             if(boxes[i]=='1') one++;
        }
        one=0;
        int prev=0;
        for(int i=n-1;i>=0;i--){//suffix sum add in prefix 
            pre[i]=pre[i]+prev;
            if(boxes[i]=='1') one++;
            prev+=one;
        }
        //  for(int i=0;i<n;i++) pre[i]+=suff[i];
         return pre;
    }
};