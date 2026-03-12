/*
Convert Decimal to Binary Number
Problem Statement: Convert decimal to binary number.

Examples:

Example 1:
Input: N = 15
Output: 1111
Explanation: 15 in binary is represented as "1111".

Example 2:
Input: 18
Output: 10010
Explanation: 18 in binary is represented as "10010".

TEST CASES:
15
15
18
0
1
2
7
8
31
32
64
100
255
1024
2047
2147483647

OUTPUT:
1111
10010
0
1
10
111
1000
11111
100000
1000000
1100100
11111111
10000000000
11111111111
1111111111111111111111111111111
*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string decimalToBinary(int n) {
    if(n == 0) return "0";
    string ans = "";
    for(int i=n;i!=0;i = i>>1)ans += (i&1) + '0';
    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin>>n;
        cout<<decimalToBinary(n)<<"\n";
        t--;
    }
    return 0;
}
