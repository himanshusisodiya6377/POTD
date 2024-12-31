/* 
 Pangram Div2. codeforces round 295

A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.
You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

Link:-https://codeforces.com/problemset/problem/520/A?mobile=false

Input
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.
The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

Output
Output "YES", if the string is a pangram and "NO" otherwise.

Examples 1:

Input: 12
toosmallword
Output: NO

Time Complexity:- O(n);
space complexity:- O(n);
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v(26,0);
     for(int i=0;i<n;i++){
        int idx=s[i];
        if(idx>=65 && idx<=90) v[idx-65]++;
        else v[idx-97]++;
     }
     bool flag=false;
    for(int i=0;i<26;i++){
        if(v[i]==0){
            flag=true;
            break;
        }
    }
    if(flag==false) cout<<"YES";
    else cout<<"NO";

return 0;
}