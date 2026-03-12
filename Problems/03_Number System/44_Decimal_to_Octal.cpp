/*
Convert Decimal to Octal
Problem Statement: Given a decimal number, convert it into Octal Number.

Examples:

Example 1:
Input:  17
Output: 21
Explanation: Octal Equivalent of 17 is 21

Example 2:
Input:  45
Output: 55
Explanation: Octal Equivalent of 45 is 55

TEST CASES:
15
17
45
0
1
7
8
9
63
64
100
511
512
1024
4096
2147483647
OUTPUT:
21
55
0
1
7
10
11
77
100
144
777
1000
2000
10000
17777777777

*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string decimalToOctal(int num) {
    if(num == 0) return "0";
    string s = "";
    while(num) {
        s += (num & 7) + '0';
        num = num >> 3;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int num;
        cin>>num;
        cout<<decimalToOctal(num)<<"\n";
        t--;
    }
    return 0;
}
