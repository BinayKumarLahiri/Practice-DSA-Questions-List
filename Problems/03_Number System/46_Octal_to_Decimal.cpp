/*
Convert Octal to Decimal
Problem Statement: Given an Octal Number, convert it into a Decimal Number.

Examples:

Example 1:
Input: 345
Output: 229
Explanation: Decimal equivalent of given Octal expressionis 229

Example 2:
Input: 170
Output: 121
Explanation: Decimal equivalent of given Octal expression is121

TEST CASES:
15
345
170
0
1
7
10
77
100
1000
512
777
1234
7777
17777777777
4000
OUTPUT:
229
120
0
1
7
8
63
64
512
330
511
668
4095
2147483647
2048
*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int octalToDecima(string s) {
    int num = 0;
    int val = 1;
    for(int i=s.length()-1;i>=0;i--) {
        num += val * (s[i]-'0');
        val *= 8;
    }
    return num;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        string s;
        cin >> s;
        int num = octalToDecima(s);
        cout<<num<<"\n";
        t--;
    }
    return 0;
}
