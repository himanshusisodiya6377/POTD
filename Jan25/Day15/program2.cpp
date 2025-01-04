/* 
 Remove Colored Pieces if Both Neighbors are the Same Color leetcode 2038(medium)

There are n pieces arranged in a line, and each piece is colored either by 'A' or by 'B'. You are given a string colors of length n where colors[i] is the color of the ith piece.
Alice and Bob are playing a game where they take alternating turns removing pieces from the line. In this game, Alice moves first.
Alice is only allowed to remove a piece colored 'A' if both its neighbors are also colored 'A'. She is not allowed to remove pieces that are colored 'B'.
Bob is only allowed to remove a piece colored 'B' if both its neighbors are also colored 'B'. He is not allowed to remove pieces that are colored 'A'.
Alice and Bob cannot remove pieces from the edge of the line.
If a player cannot make a move on their turn, that player loses and the other player wins.
Assuming Alice and Bob play optimally, return true if Alice wins, or return false if Bob wins.

Link:-https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/description/

Example 1:

Input: colors = "AAABABB"
Output: true
Explanation:
AAABABB -> AABABB
Alice moves first.
She removes the second 'A' from the left since that is the only 'A' whose neighbors are both 'A'.

Now it's Bob's turn.
Bob cannot make a move on his turn since there are no 'B's whose neighbors are both 'B'.
Thus, Alice wins, so return true.

Time Complexity:- O(n);
space complexity:- O(1;

i solved this problem with stack approach too but result in TLE

Constraints:

1 <= colors.length <= 105
colors consists of only the letters 'A' and 'B'
*/
class Solution {
public:
    bool winnerOfGame(string colors) {
           int n=colors.length();
        int countA=0;
        int countB=0;
        int count=0;
        int temp=0;
        for(int i=0;i<n;i++){//for triple pair of A
             if(colors[i]=='A') count++;
             else{
                temp=count;
                count=0;
             }
             if(temp>=3){
                int x=temp-2;
                countA+=x;
                temp=0;
             }
        }
        if(count>=3) {
            int x=count-2;
                countA+=x;
        }
        count=0;
        temp=0;
            for(int i=0;i<n;i++){//for triple pair of B
              if(colors[i]=='B') count++;
             else{
                temp=count;
                count=0;
             }
             if(temp>=3){
                int x=temp-2;
                countB+=x;
                temp=0;
             }
        }
          if(count>=3) {
            int x=count-2;
                countB+=x;
        }
        if(countA>countB) return true;
        else return false;
        // int i=0;
        // stack<char>st;
        // stack<char>temp;
        // for(int i=n-1;i>=0;i--) st.push(colors[i]);
        // while(i<n){
        //     int count=0;
        //     if(i%2==0){
        //         while(st.size()>0 && count<3){
        //             char ch=st.top();
        //             if(ch=='A') count++;
        //             else count=0;
        //             temp.push(ch);
        //             st.pop();
        //         }
        //         if(count==3) temp.pop();
        //         else return false;
        //     }
        //     else{
        //          while(st.size()>0 && count<3){
        //             char ch=st.top();
        //             if(ch=='B') count++;
        //             else count=0;
        //             temp.push(ch);
        //             st.pop();
        //         }
        //         if(count==3) temp.pop();
        //         else return true;
        //     }
        //     while(temp.size()>0){
        //              char ch=temp.top();
        //             st.push(ch);
        //             temp.pop();
        //         }
        //     i++;
        // }
        // return false;
    }
};