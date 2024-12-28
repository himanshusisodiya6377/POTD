/* 
 Trailing Zeros.CSES

Your task is to calculate the number of trailing zeros in the factorial n!.
For example, 20!=2432902008176640000 and it has 4 trailing zeros.

Link:-https://cses.fi/problemset/task/1618

Input
The only input line has an integer n.
Output
Print the number of trailing zeros in n!.

Example
Input:
20
Output:
4

Time Complexity:- O(n);
space complexity:- O(1);
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;

    for(int i=5;n/i>=1;i*=5){
            count+=n/i;
    }
    cout<<count;

return 0;
}