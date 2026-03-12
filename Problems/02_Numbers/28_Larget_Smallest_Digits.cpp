/*
Maximum and Minimum Digit in a Number
Problem Statement: Given a number N, print the smallest and largest digits present in the number.

Examples:

Example 1:
Input: N = 2746
Output: Largest digit: 7
        Smallest digit: 2
Explanation: By simply going through the digits of 
the number, we figure out the largest and smallest 
digit in the number.

Example 2:
Input: N = 23004
Output: Largest digit : 4
        Smallest digit : 0
Explanation: By simply going through the digits of 
the number, we figure out the largest and smallest 
digit in the number.

TEST CASES:
15
2746
23004
0
7
1111
90
123456789
-456
-102
987654321
1000000
2147483647
1534236469
99
505

OUTPUT:
Largest digit: 7, Smallest digit: 2
Largest digit: 4, Smallest digit: 0
Largest digit: 0, Smallest digit: 0
Largest digit: 7, Smallest digit: 7
Largest digit: 1, Smallest digit: 1
Largest digit: 9, Smallest digit: 0
Largest digit: 9, Smallest digit: 1
Largest digit: 6, Smallest digit: 4
Largest digit: 2, Smallest digit: 0
Largest digit: 9, Smallest digit: 1
Largest digit: 1, Smallest digit: 0
Largest digit: 8, Smallest digit: 1
Largest digit: 9, Smallest digit: 1
Largest digit: 9, Smallest digit: 9
Largest digit: 5, Smallest digit: 0

*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
pair<int, int> findMinMax(int num) {
    if(num == 0) return {0,0};
    int min = 9, max = 0;
    for(long long i=abs(num);i!=0;i/=10) {
        int digit = i%10;
        min = digit < min?digit:min;
        max = digit > max?digit:max;
    }
    return {max, min};
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        pair<int, int> minMax = findMinMax(n);
        cout << "Largest digit: " << minMax.first << ", Smallest digit: "<<minMax.second <<"\n";
        t--;
    }
    return 0;
}