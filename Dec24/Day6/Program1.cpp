/* 
Number of leaser Beams in a Bank 2125.(medium)

Anti-theft security devices are activated inside a bank. You are given a 0-indexed binary string array bank representing the floor plan of the bank, which is an m x n 2D matrix. bank[i] represents the ith row, consisting of '0's and '1's. 
'0' means the cell is empty, while'1' means the cell has a security device.
There is one laser beam between any two security devices if both conditions are met:

The two devices are located on two different rows: r1 and r2, where r1 < r2.
For each row i where r1 < i < r2, there are no security devices in the ith row.
Laser beams are independent, i.e., one beam does not interfere nor join with another.

Return the total number of laser beams in the bank.

Link:-https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/

Example 1:
Input: bank = ["011001","000000","010100","001000"]
Output: 8
Explanation: Between each of the following device pairs, there is one beam. In total, there are 8 beams:
 * bank[0][1] -- bank[2][1]
 * bank[0][1] -- bank[2][3]
 * bank[0][2] -- bank[2][1]
 * bank[0][2] -- bank[2][3]
 * bank[0][5] -- bank[2][1]
 * bank[0][5] -- bank[2][3]
 * bank[2][1] -- bank[3][2]
 * bank[2][3] -- bank[3][2]
Note that there is no beam between any device on the 0th row with any on the 3rd row.
This is because the 2nd row contains security devices, which breaks the second condition.

Time Complexity:- O(n^2);
space complexity:- O(1);

i used to do this problem with queue approach to sahrpen my concept but i have already solve it in 
optimise approach have SC O(1)

Constraints:

m == bank.length
n == bank[i].length
1 <= m, n <= 500
bank[i][j] is either '0' or '1'.
*/
class Solution {
public:
int security(string s){
    int n=s.length();
    int x=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') x++;
    }
    return x;
}
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        // queue<int>q;
        // TC O(n*m) SC O(1)
        int prev=0;
        int sum=0;
        for(int i=0;i<n;i++){
        int sec=security(bank[i]);
           if(sec!=0){
            if(prev!=0) sum+=sec*prev;
            prev=sec;
           } 
        }
        // while(q.size()>0){
        //     int x=q.front();
        //     q.pop();
        //     if(q.size()<=0) break;
        //     sum+=(x*q.front());
        // }
        return sum;
    }
};