/*
Find Non-repeating characters of a String
Problem:  Given a string, print non-repeating characters of the string.

Examples:

Example 1:
Input: string = “google”
Output: l,e

Explanation: Non repeating characters are l,e.

Example 2:
Input: string = “yahoo”
Output: y,a,h
Explanation: Non repeating characters are y,a,h

TEST CASES:
15
google
yahoo
apple
aabbcc
abc
1223334
   
!@#!
takeuforward
successful
a
zZz
Non-repeating
a b a
Mississippi


OUTPUT:
1. l,e
2. y,a,h
3. a,l,e
4. 
5. a,b,c
6. 1,4
7. 
8. @,#
9. t,k,e,u,f,o,w,d
10. e,f,l
11. a
12. Z
13. N,o,-,r,p,a,t,i,g
14. b
15. M

*/ 

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string getUnique(string str) {
    map<char, int> mp;
    for(char c:str)mp[c]++;
    string ans = "";
    for(char c:str) {
        if(mp[c] == 1) {
            ans += c;
            ans += ',';
            mp[c] = 0;
        }
    }
    return ans.substr(0,ans.length()-1);
}
int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;
    int i=1;
    while(t) {
        int freq[256] = {0};
        string str;
        getline(cin, str);
        cout<<i<<". "<<getUnique(str)<<"\n";
        t--;
        i++;
    }
    return 0;
}
