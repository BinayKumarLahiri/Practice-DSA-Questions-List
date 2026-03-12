/*
Find the sum of numbers in the given range
Problem Statement: Find the sum of numbers in the given range.

Examples:

Example 1:
Input: l=2, r=7
Output: 27
Explanation: 2+3+4+5+6+7=27. Therefore 27 is the answer.

Example 2:
Input: l=5, r=9
Output: 35
Explanation: 5+6+7+8+9=35. Therefore 35 is the answer.
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

// Time Complexity: O(n)
// long long findRangeSum(int l, int r) {
//     long long sum = 0;
//     for(int i=l;i<=r;i++) sum += i;
//     return sum;
// } 

// Time Complexity: O(1)
long long findRangeSum(int l, int r) {
    long long n = r-l+1;
    long long sum = r+l;
    return (n*sum)/2;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int l,r;
        cin>>l>>r;
        long long sum = findRangeSum(l,r);
        cout<<sum<<"\n";
        t--;
    }
    return 0;
}
