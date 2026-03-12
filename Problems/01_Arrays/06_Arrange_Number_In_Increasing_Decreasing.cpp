/*
Rearrange array in increasing-decreasing order
Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

Examples:

Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.

Example 2:
Input: 4 2 8 6 15 5 9 20
Output: 2 4 5 6 20 15 9 8

TEST CASES:
10
6
8 7 1 6 5 9
8
4 2 8 6 15 5 9 20
1
10
2
5 2
3
10 30 20
4
1 2 3 4
5
9 7 8 6 5
6
0 0 0 1 1 1
7
10 20 30 40 50 60 70
10
1 9 2 8 3 7 4 6 5 0

EXPECTED OUTPUTS:
1 5 6 9 8 7
2 4 5 6 20 15 9 8
10
2 5
10 30 20
1 2 4 3
5 6 9 8 7
0 0 0 1 1 1
10 20 30 70 60 50 40
0 1 2 3 4 9 8 7 6 5

*/ 

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
void arrange(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    reverse(arr.begin() + (int)arr.size()/2, arr.end());
}   
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin >> arr[i];
        arrange(arr);
        for(int i=0;i<n-1;i++) cout << arr[i] << " ";
        if(n > 0) cout << arr[n-1] << "\n";
        else cout << "\n";
        t--;
    }
    return 0;
}