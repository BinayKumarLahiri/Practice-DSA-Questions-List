/*Find the k-th Largest Factor of a Given Number
Problem: Given two integers n and k , find the k-th largest factor of n .
If k exceeds the number of factors, return 1 .
Test Case:
Input: n = 12, k = 2
Output: 6
15
12 2
12 6
10 3
10 5
1 1
100 1
100 9
100 10
7 2
16 3
24 4
30 2
49 2
1000 1
81 3

OUTPUT:
6
1
2
1
1
100
1
1
1
4
6
15
7
1000
9
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int findkthLargestFactor(int num, int k) {
    vector<int> factors;
    for(int i=num;i>=2;i--) if(num%i == 0)factors.push_back(i);
    if(factors.size()<k) return 1;
    return factors[k-1];
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int num, k;
        cin>>num>>k;
        int maxFactor = findkthLargestFactor(num, k);
        cout<<maxFactor<<"\n";
    }
    return 0;
}