/*
Remove All Duplicates from a String
Problem Statement: Given a String remove all the duplicate characters from the given String.

Examples:

Example 1:
Input: s = "bcabc"
Output: “bca"

Explanation: Duplicate Characters are removed
Example 2:
Input: s = "cbacdcbc"
Output: "cbad" 
Explanation: Duplicate Characters are removed

TEST CASES:
15
bcabc
cbacdcbc
aaaaa
abcdef
   
122333
!@#!
AabbCc
Hello World
Takeuforward
.
zZz
a b a
Mississippi
Programming

OUTPUT:
1. bca
2. cbad
3. a
4. abcdef
5.  
6. 123
7. !@#
8. AabCc
9. Helo Wrd
10. Takeuforwd
11. .
12. zZ
13. a b
14. Misp
15. Progamin

*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

string removeDuplicateChar(string str) {
    bool freq[256] = {0};
    string ans = "";
    for(char c:str) {
        if(!freq[c])ans += c;
        freq[c] = true;
    }
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;
    int i=1;
    while(t) {
        string str;
        getline(cin, str);
        cout<<i<<". "<<removeDuplicateChar(str)<<"\n";
        t--;
        i++;
    }
    return 0;
}
