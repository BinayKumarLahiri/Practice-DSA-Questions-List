/*Sum of the Cubes of All Integers Within a Given Range [n, m]
Problem: Given two integers n and m , calculate the sum of the cubes
of all integers within the range [n, m] .
Test Case:
Input: n = 1, m = 3
Output: 36 (1^3 + 2^3 + 3^3)

TEST CASES:
15
1 3
1 1
0 2
-2 2
-3 -1
2 5
1 10
-5 0
5 2
-1 1
10 12
0 0
-4 4
1 4
100 100


OUTPUT:
36
1
9
0
-36
224
3025
-225
0
0
4059
0
0
100
1000000
*/


#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
long long cubeSum1(int start, int end) {
    long long sum = 0;
    for(long i=start;i<=end;i++) sum += (i*i*i);
    return sum;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int start, end;
        cin>>start>>end;
        long long sum = cubeSum(start, end);
        cout<<sum<<"\n";
    }
    return 0;
}