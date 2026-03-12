/*
Convert Octal to Binary
Problem Statement: Given an Octal Number, convert it into Binary Number.

Examples:

Example 1:
Input: 345
Output: 011100101
Explanation: Binary equivalent of given Octal expressionis 011100101

Example 2:
Input: 170
Output: 001111000
Explanation: Binary equivalent of given Octal expression is 001111000

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
555
707
123
456
7777
2000
17777777777

OUTPUT:
011100101
001111000
000
001
111
001000
111111
001000000
101101101
111000111
001010011
100101110
111111111111
010000000000
001111111111111111111111111111111
*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string r[8] = {"000", "001", "010", "011", "100", "101", "110","111"};
string octalToBinary(string num) {
    string s = "";
    for(char c:num)s += r[c-'0'];
    return s;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        string num;
        cin>>num;
        cout<<octalToBinary(num)<<"\n";
        t--;
    }
    return 0;
}
