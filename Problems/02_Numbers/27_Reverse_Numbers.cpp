/*
Reverse digits of a number
Problem Statement: Given an integer. Write a program to reverse digits of a number.

Examples:

Example 1:
Input: N = 472
Output: 274
Explanation: Reading the number from back to front, we see that the output should be 274

Example 2:
Input: N = 470
Output: 74
Explanation: Reading the number from back to front, we get 074. For an integer with no decimals, we know that leading zeros have no significance and therefore our answer should be 74
TEST CASES:
15
472
470
1234
0
7
100
-123
-450
1000000
2147483647
1534236469
-2147483648
9999
121
500001

OUTPUT:
274
74
4321
0
7
1
-321
-54
1
0
0
0
9999
121
100005

*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int reverseNum(int num) {
    long long reverse = 0;
    while(num) {
        reverse = reverse * 10 + (num%10);
        num /= 10;
    }
    if(reverse > INT_MAX || reverse < INT_MIN) return 0;
    return (int)reverse;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        cout << reverseNum(n) << "\n";
        t--;
    }
    return 0;
}