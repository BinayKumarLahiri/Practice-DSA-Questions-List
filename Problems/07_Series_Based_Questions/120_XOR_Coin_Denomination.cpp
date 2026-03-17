/*
Q6. XOR Coin Denomination (Story-Based) ■ VERIFIED PYQ [Easy]
Problem A shopkeeper has coins of several denominations. Initially there are an even number of coins of each type. One coin is lost.
Find the denomination of the lost coin. Input: First line = N (total coins remaining). Second line = N space-separated coin values.
Constraints 1 <= N <= 10**5 (N is always odd after the loss)
Sample Input
7
1 1 2 2 3 3 4
Sample Output
4
Explanation XOR of all values: 1^1^2^2^3^3^4 = 4. The lone coin is the lost denomination.

TEST CASES:
12
7
1 1 2 2 3 3 4
1
100
3
5 10 5
5
1 2 3 2 1
9
7 7 8 8 9 9 10 10 11
11
0 0 1 1 2 2 3 3 4 4 5
7
1000000 1 1000000 2 2 3 3
3
99999 99999 99999
5
42 42 42 42 42
13
1 2 3 4 5 6 7 6 5 4 3 2 1
7
15 15 15 15 15 15 15
1
0


OUTPUT:
4
100
10
3
11
5
1
99999
42
7
15
0

*/

#include <bits/stdc++.h>
using namespace std;
int missingDenomination(vector<int>& arr) {
    int missing = 0;
    for(int num:arr) missing ^= num;
    return missing;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        cout << missingDenomination(arr) << "\n";
    }
    return 0;
}