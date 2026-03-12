/*
Replace all the 0’s with 1 in a given integer
Problem Statement: You are given an integer. Your task is to replace all the zeros in the integer with ones.

Examples:

Example 1:
Input: N = 102003
Output: 112113
Explanation: The 2nd,4th and 5th position from left contain 0.The resultant integer has replaced the 0’s in those  positions with 1.

Example 2:
Input:  204
Output: 214
Explanation: The 2nd position from left contain 0. The resultant integer has replaced the 0 in that position with 1.
TEST CASES:
15
102003
204
0
100
909
111
7000
1000000000
50607
10
20002
303030
990
5
808080808

OUTPUT:
112113
214
1
111
919
111
7111
1111111111
51617
11
21112
313131
991
5
818181818
*/ 

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
long long replaceZeros(long long n) {
    if(n == 0) return 1;
    long long changed = n;
    long long dif = 1;
    long long sign = n<0?-1:1;
    for(long long i=abs(n);i!=0;i/=10) {
        if(i%10 == 0) {
            changed += (dif * sign);
        }
        dif *= 10;
    }
    return changed;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin>>n;
        long long changed = replaceZeros(n);
        cout << changed <<"\n";
        t--;
    }
    return 0;
}
