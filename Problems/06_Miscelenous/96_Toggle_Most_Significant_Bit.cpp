/*Toggle Bits After the Most Significant Bit
Problem: Given a positive integer, convert it to binary, toggle all bits
after and including the most significant bit, and return the resultant
integer.
Test Case:
Input: n = 10
Output: 5

TEST CASES:
15
10
1
2
4
7
8
15
16
21
32
50
64
127
128
1023


OUTPUT:
5
0
1
3
0
7
0
15
10
31
13
63
0
127
0
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int switchBits(int num) {
    int mask = 0;
    int t = num;
    while(t) {
        mask = (mask << 1) | 1;
        t = t >> 1;
    }
    return num ^ mask;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin>>num;
        cout<<switchBits(num)<<"\n";
    }
    return 0;
}