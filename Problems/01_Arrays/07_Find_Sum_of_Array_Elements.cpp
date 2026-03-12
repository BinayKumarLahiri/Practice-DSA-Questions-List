/*
Calculate Sum of the Elements of the Array
Problem Statement: Given an array, we have to find the sum of all the elements in the array.

Examples:

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 15
Explanation: Sum of all the elements is 1+2+3+4+5 = 15

Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 11
Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11

TEST CASES:
10
5
1 2 3 4 5
6
1 2 1 1 5 1
1
100
5
-1 -2 -3 -4 -5
4
0 0 0 0
3
100000 200000 300000
6
10 -10 20 -20 30 -30
2
-50 100
5
1000000000 1000000000 1000000000 1000000000 1000000000
8
1 1 1 1 1 1 1 1

EXPECTED OUTPUTS:
15
11
100
-15
0
600000
0
50
5000000000
8

*/ 

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

long long sumArray(vector<int> &arr) {
    long long sum = 0;
    for(int num:arr) sum += num;
    return sum;
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
        long long sum = sumArray(arr);
        cout << sum << "\n";
        t--;
    }
    return 0;
}