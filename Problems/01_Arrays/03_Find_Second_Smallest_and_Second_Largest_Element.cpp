/*
Find Second Smallest and Second Largest Element in an array
Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Examples:

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
    Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

Example 2:
Input: [1]
Output: Second Smallest : -1
    Second Largest : -1
Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.

TEST CASES:
10
6
1 2 4 7 7 5
1
1
2
10 10
3
10 20 30
5
-5 -10 0 -2 3
4
7 7 2 2
3
1 2 2
2
5 10
6
100 5 100 2 100 1
4
-1 -1 -1 -1

EXPECTED OUTPUTS:
2 5
-1 -1
-1 -1
20 20
-5 0
7 2
2 1
10 5
2 5
-1 -1

*/ 

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
vector<int> findSecondMinMax(vector<int> &arr) {
    if(arr.size() < 2) return {-1,-1};
    int mn = INT_MAX, smin = INT_MAX, mx = INT_MIN, smax = INT_MIN;
    for(int num:arr) {
        mn = min(mn, num);
        mx = max(mx, num);
    }

    for(int num:arr) {
        if(num < smin && num != mn) smin = num;
        if(num > smax && num != mx) smax = num;
    }

    return {smin!=INT_MAX? smin:-1, smax!=INT_MIN?smax:-1};
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for(int i=0;i<n;i++) cin >> arr[i];
        vector<int> minMax = findSecondMinMax(arr);
        cout << minMax[0] << " " << minMax[1] << "\n";
        t--;
    }
    return 0;
}