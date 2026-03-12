/*
Convert Binary to Decimal
Problem Statement: Convert a binary number to a decimal number.

Examples:

Example 1:
Input: N = 1011
Output: 11
Explanation: 1011 when converted to decimal number is “11”.

Example 2:
Input: 100
Output: 4
Explanation: 100 when converted to decimal number is “4”.

TEST CASES:
15
1011
100
0
1
111
1010
11111
1000000
110110
11111111
1010101010
111111111111111
1000000000000000
1111111111111111111111111111111
11001100

OUTPUT:
11
4
0
1
7
10
31
64
54
255
682
32767
32768
2147483647
204
*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int binaryToDecima(string s) {
    int num = 0;
    int val = 1;
    for(int i=s.length()-1;i>=0;i--) {
        num += val * (s[i]-'0');
        val *= 2;
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
        int num = binaryToDecima(s);
        cout<<num<<"\n";
        t--;
    }
    return 0;
}
