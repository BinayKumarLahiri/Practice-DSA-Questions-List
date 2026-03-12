/*You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

TEST CASES:
15
1
2
3
4
5
6
7
8
10
15
20
30
40
44
45


OUTPUT:
1
2
3
5
8
13
21
34
89
987
10946
1346269
165580141
1134903170
1836311903
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

long long numberOfWays(int n) {
    if(n <= 1)return 1;
    long long prev1 = 1;
    long long prev2 = 1;
    long long curri = 1;
    for(long long i=2;i<=n;i++) {
        curri = prev1 + prev2;
        prev1 = prev2;
        prev2 = curri;
    }
    return curri;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        long long ans = numberOfWays(n);
        cout<<ans<<"\n";
    }
    return 0;
}