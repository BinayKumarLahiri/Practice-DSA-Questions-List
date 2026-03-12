/*
Check whether a number is positive or negative
Problem statement: Given a number n check whether it’s positive or negative.

Examples:

Example 1:
Input: n=5
Output: Positive

Example2:
Input: n=-6
Output: Negative

TEST CASES:
15
5
-6
0
1
-1
1000
-1000
2147483647
-2147483648
0.5
-0.5
99999
-99999
0.00001
-0.00001

OUTPUT:
Positive
Negative
Positive
Positive
Negative
Positive
Negative
Positive
Negative
Positive
Negative
Positive
Negative
Positive
Negative

*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        double num;
        cin >> num;
        cout << (num < 0?"Negative":"Positive")<<"\n";
        t--;
    }
    return 0;
}