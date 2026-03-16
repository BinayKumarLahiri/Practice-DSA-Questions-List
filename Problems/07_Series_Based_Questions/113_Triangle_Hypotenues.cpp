/*
Write a C program to find the hypotenuse of a triangle using command line
arguments.

TEST CASES:
10
3 4
5 12
8 15
7 24
1 1
10 20
20 21
9 40
12 16
2.5 6.5


OUTPUT:
5.00
13.00
17.00
25.00
1.41
22.36
29.00
41.00
20.00
6.96

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
double hypotenuse(double base, double perp) {
    return sqrt(base*base + perp*perp);
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        double base, perp;
        cin>>base>>perp;
        double hypo = hypotenuse(base, perp);
        printf("%.2f\n", hypo);
        t--;
    }
    return 0;
}