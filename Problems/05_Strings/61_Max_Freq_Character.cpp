/*
Maximum occurring character in a string
Maximum occurring character in a string

Problem Statement: Given a string, return the character that occurs the maximum number of times in the string. If the maximum occurrence of two or more characters is the same, return any one of them. 

Examples:

Example 1:
Input: str = “takeuforward”
Output: a
Explanation: The character 'a' and 'r’ have the same  maximum occurrence i.e 2. Hence we can print any one of them

Example 2:
Input: str = “apple”
Output: p
Explanation: The character 'p' have the maximum occurrence i.e 2.

TEST CASES:
15
takeuforward
apple
mississippi
122333
   
AbcaB
!@#!
a
aaaaa
The quick brown fox
1001
zZz
a b a
abcABC
success

OUTPUT:
1. a
2. p
3. i
4. 3
5.  
6. A
7. !
8. a
9. a
10.  
11. 0
12. z
13.  
14. A
15. s

*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

char maxFreqChar(string str) {
    vector<int> f(256,0);
    for(char c:str)f[c]++;
    char m = str[0];
    for(char c:str) {
        if(f[c] == f[m]) m = min(m,c);
        else if(f[c] > f[m])m = c;
    }
    return m;
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
        cout<<i<<". "<<maxFreqChar(str)<<"\n";
        t--;
        i++;
    }
    return 0;
}
