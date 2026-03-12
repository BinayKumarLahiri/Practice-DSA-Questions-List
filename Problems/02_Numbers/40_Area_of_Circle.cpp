/*
Calculate the Area of the Circle
Problem Statement: Given the radius of the circle, calculate the area of the circle.

Examples:

Example 1:
Input: N = 5
Output: 78.5
Explanation: Using formula  πr2 for finding area of circle we get area as 78.5

Example 2:
Input: N = 4
Output: 50.2
Explanation: Using formula  πr2 for finding area of circle we get area as 50.2
TEST CASES:
15
5
4
1
0
10
2.5
7
12.3
100
0.5
3.14
20
15.5
0.1
1000
OUTPUT:
78.54
50.27
3.14
0.00
314.16
19.63
153.94
475.29
31415.93
0.79
30.97
1256.64
754.77
0.03
3141592.65
*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define PI 3.14159265
double findArea(double r) {
    if(r<=0)return 0;
    return PI * r * r;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        double r;
        cin>>r;
        double area = findArea(r);
        printf("%.2f\n", area);
        t--;
    }
    return 0;
}
