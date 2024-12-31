/* 
Assign Cookies 455.(easy)

Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.
Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j].
If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.

Link:-https://leetcode.com/problems/assign-cookies/description/

Example 1:

Input: g = [1,2,3], s = [1,1]
Output: 1
Explanation: You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
You need to output 1.

Time Complexity:- O(nlogn);
space complexity:- O(n);

i used to do this problem with stack approach to sahrpen my concept but i have already solve it in 
TC:O(nlogn) SC:O(1)

Constraints:
1 <= g.length <= 3 * 104
0 <= s.length <= 3 * 104
1 <= g[i], s[j] <= 231 - 1
*/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        //i have did already it with tc of O(nlogn) and sc O(1)
        //here in new approach i use the concept of stacks to shapen my stack knowledge but tc is O(nlogn) sc O(n);
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        stack<int>gt;
        stack<int>st;
        for(int i=0;i<g.size();i++) gt.push(g[i]);
        for(int i=0;i<s.size();i++) st.push(s[i]);
        while(st.size()>0 && gt.size()>0){
            if(st.top()==gt.top()){
                count++;
                gt.pop();
                st.pop();
            }
            else if(gt.top()<st.top()) {
                st.pop();
                count++;
                gt.pop();
            }
            else gt.pop();
        }
        return count;

        // int i=0,j=0,count=0;
        // sort(g.begin(),g.end());
        // sort(s.begin(),s.end());
        // int n=g.size();
        // int m=s.size();
        // while(i<n && j<m){
        // if(s[j]>=g[i]){
        //     count++;
        //     i++;
        //     j++;
        // }
        // else j++;
        // }
        // return count;

        
    }
};