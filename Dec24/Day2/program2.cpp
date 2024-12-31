/* 
Find Minimum Number Of operation to make all numbers divisible by 3.(easy)

You are given an integer array nums. In one operation, you can add or subtract 1 from any element of nums.
Return the minimum number of operations to make all elements of nums divisible by 3..

Link:-https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/

Example 1:

Input: nums = [1,2,3,4]

Output: 3

Explanation:

All array elements can be made divisible by 3 using 3 operations:

Subtract 1 from 1.
Add 1 to 2.
Subtract 1 from 4.

Time Complexity:- O(n);
space complexity:- O(1);

Constraints:
1 <= nums.length <= 50
1 <= nums[i] <= 50
*/
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==0) continue;
            else if((nums[i]%3)!=0){
                int x=nums[i]%3;
                if(x<=1) sum+=x;
                else sum+=(3-x);
            } 
        }
        return sum;
    }
};