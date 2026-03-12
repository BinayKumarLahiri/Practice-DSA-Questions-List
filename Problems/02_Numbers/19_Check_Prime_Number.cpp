/*
Check if a number is prime or not
Problem Statement: Given a number, check whether it is prime or not. A prime number is a natural number that is only divisible by 1 and by itself.

Examples 1 2 3 5 7 11 13 17 19 …

Examples:

Example 1:
Input: N = 3
Output: Prime
Explanation: 3 is a prime number

Example 2:
Input: N = 26
Output: Non-Prime
Explanation: 26 is not prime

TEST CASES:
15
1
2
3
4
25
29
49
97
100
121
523
104729
2147483647
0
-7

OUTPUT:
false
true
true
false
false
true
false
true
false
false
true
true
true
false
false

*/

#include <iostream>
#include <math.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool checkPrime(int num) {
    if(num < 2) return false;
    for(int i=2;i<=sqrt(num);i++) {
        if(num % i == 0) return false;
    }
    return true;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int num;
        cin >> num;
        bool isPrime = checkPrime(num);
        if(isPrime) cout << "true\n";
        else cout << "false\n";
        t--;
    }
    return 0;
}