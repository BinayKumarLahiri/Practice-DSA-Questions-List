/*
Calculate the Power of a Number : Binary Exponentiation
Problem Statement: Find the Power of a number.

Examples:

Example 1:
Input: N = 5, k=3
Output: 125
Explanation: Since 5*5*5 is 125.

Example 2:
Input: n=2 k=4
Output: 16
Explanation: Since 2*2*2*2 is 16

TEST CASES:
15
5 3
2 4
2 10
3 0
1 100
0 5
-2 3
-2 4
10 6
2 31
7 2
4 5
2 62
1 0
9 3
OUTPUT:
125
16
1024
1
1
0
-8
16
1000000
2147483648
49
1024
4611686018427387904
1
729
*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
long long power(int num, int pow) {
    long long ans = 1;
    for(int i=0;i<pow;i++) ans *= num;
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n, p;
        cin>>n>>p;
        long long ans = power(n,p);
        cout << ans << "\n";
        t--;
    }
    return 0;
}
