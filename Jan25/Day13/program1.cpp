/* 
Max Increase to Keep City Skyline. leetcode 807 (medium)

There is a city composed of n x n blocks, where each block contains a single building shaped like a vertical square prism. You are given a 0-indexed n x n integer matrix grid where grid[r][c] represents the height of the building located in the block at row r and column c.
A city's skyline is the outer contour formed by all the building when viewing the side of the city from a distance. The skyline from each cardinal direction north, east, south, and west may be different.
We are allowed to increase the height of any number of buildings by any amount (the amount can be different per building). The height of a 0-height building can also be increased. However, increasing the height of a building should not affect the city's skyline from any cardinal direction.
Return the maximum total sum that the height of the buildings can be increased by without changing the city's skyline from any cardinal direction.

Link:-https://leetcode.com/problems/max-increase-to-keep-city-skyline/description/?envType=problem-list-v2&envId=greedy

Input: grid = [[3,0,8,4],[2,4,5,7],[9,2,6,3],[0,3,1,0]]
Output: 35
Explanation: The building heights are shown in the center of the above image.
The skylines when viewed from each cardinal direction are drawn in red.
The grid after increasing the height of buildings without affecting skylines is:
gridNew = [ [8, 4, 8, 7],
            [7, 4, 7, 7],
            [9, 4, 8, 7],
            [3, 3, 3, 3] ]

Time Complexity:- O(n^2);
space complexity:- O(n);

i solved this problem with O(n^2) time complexity but it can be optimise with greedy

Constraints:

n == grid.length
n == grid[r].length
2 <= n <= 50
0 <= grid[r][c] <= 100
*/
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int r=grid.size();//rows
        vector<int>rowmax(r,0);//string maximum
        int c=grid[0].size();//coloumn
        vector<int>colmax(c,0);
    
        for(int i=0;i<r;i++){//calculate the max in each row
            int max=INT_MIN;
            for(int j=0;j<c;j++){
              if(grid[i][j]>max) max=grid[i][j];
            }
            rowmax[i]=max;
        }

          for(int i=0;i<c;i++){//calculate the max in coloumn
            int max=INT_MIN;
            for(int j=0;j<r;j++){
              if(grid[j][i]>max) max=grid[j][i];
            }
            colmax[i]=max;
        }
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){//get min between each row and col subtract from that grid value and add in ans
                int maxi=min(rowmax[i],colmax[j]);
                ans+=(maxi-grid[i][j]);
            }
        }
        return ans;
    }
};