/*
Sum Of Digits of A Number
Problem Statement: Given an integer, find the sum of digits of that integer.

Examples:

Example 1:
Input: N = 472
Output: 13
Explanation: The digits in the number are 4,7 and 2. Summing them up gives us a value of 13

Example 2:
Input: N = 102
Output: 3
Explanation: The digits in the number are 0, 1, and 2. Summing them up gives us a value of 3
TEST CASES:
16
472
102
0
5
99
1000
12345
999999
1010101
2147483647
8
11111
5005
77
2024
-2147483648

OUTPUT:
13
3
0
5
18
1
15
54
4
46
8
5
10
14
8
47
*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int digitSum(int n) {
    int sum = 0;
    for(long long i=abs((long long)n);i!=0;i/=10)sum += (i%10);
    return sum;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        int sum = digitSum(n);
        cout<<sum<<'\n';
        t--;
    }
    return 0;
}
