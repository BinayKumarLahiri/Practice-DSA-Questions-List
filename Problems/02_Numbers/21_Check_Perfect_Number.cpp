/*
Check whether a number is Perfect Number or not
Problem Statement: Perfect Number. Write a program to find whether a number is a perfect number or not.

A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself). 

Examples:

Example 1:
Input: n=6
Output: 6 is a perfect number

Example 2:
Input: n=15
Output: 15 is not a perfect number

Example 3:
Input: n=28
Output: 28 is a perfect number
Reason:
For 6 and 28 , the sum of their proper divisors (1+2+3) and (1+4+7+14) is equal to the respective numbers and for 15 it is not.

TEST CASES:
15
6
15
28
1
2
496
8128
10
12
100
33550336
0
-6
8
8589869056

OUTPUT:
6 is a perfect number
15 is not a perfect number
28 is a perfect number
1 is not a perfect number
2 is not a perfect number
496 is a perfect number
8128 is a perfect number
10 is not a perfect number
12 is not a perfect number
100 is not a perfect number
33550336 is a perfect number
0 is not a perfect number
-6 is not a perfect number
8 is not a perfect number
8589869056 is a perfect number


*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool isPerfect(long long num) {
    if(num < 2) return false;
    long long sum = 1;
    for(int i=2;i<=sqrt(num);i++)  {
        if(num%i == 0) {
            sum += i;
            sum += (num / i);
        }
    }
    return sum == num;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        long long num;
        cin >> num;
        if(isPerfect(num)) cout << num << " is a perfect number\n";
        else cout << num << " is not a perfect number\n";
        t--;
    }
    return 0;
}