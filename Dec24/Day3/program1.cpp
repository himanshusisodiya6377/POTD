/* 
How many number are samller than current numbers 1365.(easy)

Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] 
you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.

Link:-https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

Example 1:

Input: nums = [8,1,2,2,3]
Output: [4,0,1,1,3]
Explanation: 
For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
For nums[1]=1 does not exist any smaller number than it.
For nums[2]=2 there exist one smaller number than it (1). 
For nums[3]=2 there exist one smaller number than it (1). 
For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).

Time Complexity:- O(n^2);
space complexity:- O(n);
i know there are many approaches to solve it with in efficient way . i will learn it .
Constraints:
2 <= nums.length <= 500
0 <= nums[i] <= 100
*/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,0);
        //check optimum
        for(int i=0;i<n;i++){
            int less=0;
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j]) less++;
            }
            v[i]=less;
        }
        return v;
    }
};