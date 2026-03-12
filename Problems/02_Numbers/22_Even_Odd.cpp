/*
Check whether a given number is even or odd
Problem Statement: Given a number n, check whether a given number is even or odd.

Examples:

Example 1:
Input: n=5
Output: odd
Explanation: 5 is not divisible by 2.
 
Example 2:  
Input: n=6
Output: even
Explanation: 6 is divisible by 2.

TEST CASES:
15
5
6
0
1
-2
-3
100
101
2147483647
-2147483648
999999
12345678
-0
13
-1

OUTPUT:
odd
even
even
odd
even
odd
even
odd
odd
even
odd
even
even
odd
odd

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int num;
        cin >> num;
        if(num%2) cout << "odd\n";
        else cout << "even\n";
        t--;
    }
    return 0;
}