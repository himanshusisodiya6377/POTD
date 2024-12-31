/* 
 New Year and Hurry. codeforces Good bye 2016

Limak is going to participate in a contest on the last day of the 2016. The contest will start at 20:00 and will last four hours, exactly until midnight. There will be n problems, sorted by difficulty, i.e. problem 1 is the easiest and problem n is the hardest. 
Limak knows it will take him 5·i minutes to solve the i-th problem.
Limak's friends organize a New Year's Eve party and Limak wants to be there at midnight or earlier. He needs k minutes to get there from his house, where he will participate in the contest first.
How many problems can Limak solve if he wants to make it to the party?

Link:-https://codeforces.com/problemset/problem/750/A?mobile=false

Input
The only line of the input contains two integers n and k (1 ≤ n ≤ 10, 1 ≤ k ≤ 240) — the number of the problems 
in the contest and the number of minutes Limak needs to get to the party from his house.

Output
Print one integer, denoting the maximum possible number of problems
Limak can solve so that he could get to the party at midnight or earlier.

Examples 1:

Input: 3 222
Output: 2

Time Complexity:- O(n);
space complexity:- O(1);
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;//number of questions
    int k;
    cin>>k;//time taken to reach party;
    int clock=240;
    clock-=k;//we let that she slve questions as possible at home before reaching to party
    //as we want max questions she can solve 
    int ques=0;
    int i=1;
    while(clock>0 && n>0){
      clock-=5*i;
      if(clock<0) break;
      n--;
      ques++;
      i++;
    }
    cout<<ques;
    
return 0;
}