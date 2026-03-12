/*
Sum of first N Natural Numbers
Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.

Examples:

Example 1:
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Example 2:
Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15

TEST CASE:
15
1
5
6
10
0
2
100
1000
65535
100000
1000000
46340
46341
2147483647
99

OUTPUT:
1
15
21
55
0
3
5050
500500
2147450880
5000050000
500000500000
1073720970
1073767311
2305843008139952128
4950

*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int main() {
    fastio;
    int t;
    cin>>t;
    while(t) {
        long long n;
        cin>>n;
        long long sum = (n*(n+1))/2;
        cout << sum << "\n";
        t--;
    }
    return 0;
}