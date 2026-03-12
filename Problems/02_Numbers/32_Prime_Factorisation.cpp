/*
Print all Prime Factors of the given number
Problem Statement: Given a number n. Print all Prime Factors of the given number n.

Examples:

Example 1:
Input: N = 12
Output: 2,2,3
Explanation: These are the prime factors of 12.

Example 2:
Input: N = 36
Output: 2,2,3,3
Explanation: These are the prime factors of 36.

TEST CASES:
15
12
36
2
13
25
48
100
97
1024
210
999
45
60
81
1001

OUTPUT:
2 2 3
2 2 3 3
2
13
5 5
2 2 2 2 3
2 2 5 5
97
2 2 2 2 2 2 2 2 2 2
2 3 5 7
3 3 3 37
3 3 5
2 2 3 5
3 3 3 3
7 11 13
*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
vector<int> primeFactor(int n) {
    vector<int> factors;
    for(int i=2;i<=n;i++) {
        while(n!=0 && n%i == 0) {
            factors.push_back(i);
            n/=i;
        }
        if(n == 0) return factors;
    }
    return factors;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        vector<int> factors = primeFactor(n);
        for(int factor:factors) cout << factor << " ";
        cout << "\n";
        t--;
    }
    return 0;
}
