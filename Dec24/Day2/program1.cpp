/* 
single number .(easy)
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Link:-https://leetcode.com/problems/single-number/description/

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4

Time Complexity:- O(n);
space complexity:- O(1);

Constraints:
1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        // int i=0;
        // while(i<n){
        //   if(i==n-1) return nums[i];
        //    else if(nums[i]==nums[i+1]){
        //         i+=2;
        //     }
        //     else return nums[i];
        // }
        // return -1;
        //optimum approach through xor operation
        int ans=0;
        for(int i=0;i<n;i++){
         ans^=nums[i];
        }
        return ans;
    }
};