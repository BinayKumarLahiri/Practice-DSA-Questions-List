/*
Greatest of three numbers
Problem Statement: Given three numbers. Find the greatest of three numbers.

Examples:

Example 1:
Input: 1 3 5
Output: 5
Explanation: Answer is 5.Since 5 is greater than 1 and 3.

Example 2:
Input: 1.123  1.124 1.125
Output: 1.125
Explanation: Answer is 1.125. Since 1.125 is greater than 1.123 and 1.124

TEST CASES:
15
1 3 5
1.123 1.124 1.125
10 20 15
5 5 5
-1 -5 -10
-10 0 10
0 0 1
1.5 1.5 1.4
1000000 999999 1000001
0.0001 0.0002 0.00015
-100 -50 0
2147483647 2147483646 2147483645
-2147483648 -2147483647 -2147483646
123.456 123.457 123.455
-99.9 -99.8 -99.9

OUTPUT:
5.000000
1.125000
20.000000
5.000000
-1.000000
10.000000
1.000000
1.500000
1000001.000000
0.000200
0.000000
2147483647.000000
-2147483646.000000
123.457000
-99.800000

*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
double greatest(double a, double b, double c) {
    double g = a;
    g = g>b?g:b;
    g = g>c?g:c;
    return g;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        double a,b,c;
        cin>>a>>b>>c;
        double g = greatest(a,b,c);
        printf("%f\n", g);
        t--;
    }
    return 0;
}