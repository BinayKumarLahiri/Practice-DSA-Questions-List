/*
Find Median of the given Array
Problem Statement: Given an unsorted array, find the median of the given array.

Examples:

Example 1:
Input: [2,4,1,3,5] 5 
Output: 3

Example 2:
Input: [2,5,1,7]
Output: 3.5

TEST CASES:
10
5
2 4 1 3 5
4
2 5 1 7
1
100
2
10 20
6
1 2 3 4 5 6
3
10 40 20
5
5 1 4 2 3
6
10 20 30 40 50 100
4
1 1 1 1
5
-5 -10 0 5 10

OUTPUT:
3
3.5
100
15.0
3.5
20
3
35.0
1
0

*/ 

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
double median(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    int size = (int) arr.size();
    if(size == 0) return -1;
    else if(size % 2 == 0) {
        return (double)(arr[size/2-1] + arr[size/2]) / 2.0f;
    }else {
        return arr[size/2];
    }
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
        double md = median(arr);
        cout << md << "\n";
        t--;
    }
    return 0;
}