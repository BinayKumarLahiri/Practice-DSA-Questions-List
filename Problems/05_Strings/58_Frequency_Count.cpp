/*
Calculate Frequency of characters in a String
Problem Statement: Given a string, calculate the frequency of characters in a string.

Examples:

Example 1:
Input: takeuforward
Output: a2 d1 e1 f1 k1 o1 r2 t1 u1 w1 
Explanation: Count of every character of string is printed.

Example 2:
Input: articles
Output: a1 c1 e1 i1 l1 r1 s1 t1 
Explanation: Count of every character of string is printed.

TEST CASES:
15
takeuforward
articles
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

OUTPUT:
1. a2 d1 e1 f1 k1 o1 r2 t1 u1 w1 
2. a1 c1 e1 i1 l1 r1 s1 t1 
3. a1 e1 l1 p2 
4. i4 m1 p2 s4 
5. 11 22 33 
6.  3 
7. A1 B1 a1 b1 c1 
8. !2 #1 @1 
9. a1 
10. a5 
11.  3 T1 b1 c1 e1 f1 h1 i1 k1 n1 o2 q1 r1 u1 w1 x1  
12. 02 12 
13. Z1 z2 
14.  2 a2 b1 
15. A1 B1 C1 a1 b1 c1 

*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

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
        for(char c:str) freq[c]++;
        cout<<i<<". ";
        for(int i=0;i<256;i++) if(freq[i] != 0) cout << (char)i << freq[i]<<" ";
        cout<<"\n";
        t--;
        i++;
    }
    return 0;
}
