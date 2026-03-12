/*
Express given number as Sum of Two Prime Numbers
Problem: Given a number n, express the number as a sum of 2 prime numbers.

Examples:

Example 1:
Input : N = 74
Output : True . 
Explanation: 74 can be expressed as 71 + 3 and both are prime numbers. 

Example 2:
Input : N = 11
Output : False. 
Explanation: 11 cannot be expressed as sum of two prime numbers.
TEST CASES:
15
74
11
4
10
23
2
3
5
8
13
100
99
121
20
14

OUTPUT:
YES
NO
YES
YES
NO
NO
NO
YES
YES
YES
YES
YES
NO
YES
YES
*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool checkPrime(int num) {
    if(num < 2) return false;
    for(int i=2;i<=sqrt(num);i++) {
        if(num % i == 0) return false;
    }
    return true;
}
bool sumPossible(int n) {
    if(n <= 3) return false;
    for(int i=2;i<=n;i++) if(checkPrime(i) && checkPrime(n-i))return true;
    return false;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        if(sumPossible(n)) cout <<"YES\n";
        else cout<<"NO\n";
        t--;
    }
    return 0;
}
