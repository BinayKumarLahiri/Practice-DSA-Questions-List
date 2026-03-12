/*
Factorial of a Number : Iterative and Recursive
Problem Statement: Given a number X,  print its factorial.

To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.

Note: X  is always a positive number. 

Examples:

Example 1:
Input: X = 5
Output: 120
Explanation: 5! = 5*4*3*2*1

Example 2:
Input: X = 3
Output: 6
Explanation: 3!=3*2*1

TEST CASES:
15
0
1
2
3
4
5
6
7
8
9
10
11
12
13
20

OUTPUT:
1
1
2
6
24
120
720
5040
40320
362880
3628800
39916800
479001600
6227020800
2432902008176640000

*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
long long factorial(int num) {
    long long fact = 1;
    for(int i=1;i<=num;i++) fact *= i;
    return fact;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        long long fact = factorial(n);
        cout << fact << "\n"; 
        t--;
    }
    return 0;
}
