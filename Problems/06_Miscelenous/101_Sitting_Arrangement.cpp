/*Round Table Seating Arrangement with Constraints
Problem: Given N members sitting around a circular table, find the
possible number of ways to arrange them such that the president and
prime minister of India are always seated next to each other.
Test Case:
Input: N = 5
Output: 12

TEST CASES:
15
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
14
15
20

OUTPUT:
2
2
4
12
48
240
1440
10080
80640
725760
7257600
79833600
958003200
12454041600
12804747411456000

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
long long factorial(int num) {
    long long fact = 1;
    for(int i=1;i<=num;i++) fact *= i;
    return fact;
}
long long numberOfWays(int n) {
    if(n < 2) return -1;
    return 2 * factorial(n-2);
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        long long ways = numberOfWays(n);
        cout<<ways<<"\n";
    }
    return 0;
}