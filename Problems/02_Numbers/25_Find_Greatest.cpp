/*
Greatest of two numbers
Problem Statement: Given two numbers. Find the greatest of two numbers.

Examples:

Example 1:
Input: 1 3
Output: 3
Explanation: Answer is 3,since 3 is greater than 1.

Input: 1.123  1.124
Output: 1.124
Explanation: Answer is 1.124,since 1.124 is greater than 1.123.
TEST CASES:
15
1 3
1.123 1.124
10 10
-1 -5
-10 2
0 0
-0.5 -0.1
1000000 999999
0.000001 0.000002
-100 0
2147483647 2147483646
-2147483648 -2147483647
5.5 5.5
123.456 123.457
-99.9 99.9

OUTPUT:
3.00
1.12
10.00
-1.00
2.00
0.00
-0.10
1000000.00
0.00
0.00
2147483647.00
-2147483647.00
5.50
123.46
99.90

*/ 

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        double a, b;
        cin >> a >> b;
        double n = a>b?a:b;
        printf("%.2f\n", n);
        t--;
    }
    return 0;   
}