/* 
Sort Colours 75.(medium)

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Link:-https://leetcode.com/problems/sort-colors/description/

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Time Complexity:- O(n);
space complexity:- O(1);

i have already solve it using sort algorithms but i solve it again with dutch flag algorithm

Constraints:
n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
      int lo=0,mid=0;
      int hi=n-1;//indexed
      while(mid<=hi){
       if(nums[mid]==0) {
        swap(nums[lo],nums[mid]);
        mid++;
        lo++;
       }
       else if(nums[mid]==2){
        swap(nums[mid],nums[hi]);
        hi--;
       }
       else{
        mid++;
       }
      }
      return;
    }
};