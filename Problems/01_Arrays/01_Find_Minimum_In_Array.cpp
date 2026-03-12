/*
Problem Statement: Given an array, we have to find the smallest element in the array.

Examples:

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 5
Explanation: 5 is the smallest element in the array.


TEST CASES: 
10
5
2 5 1 3 0
5
8 10 5 7 9
1
42
6
-1 -5 0 10 -20 3
4
7 7 7 7
2
100 101
5
-10 -20 -30 -40 -50
8
0 5 10 15 20 25 30 -1
3
10 2 10
6
500 120 340 90 1000 10


EXPECTED OUTPUT:
0
5
42
-20
7
100
-50
-1
2
10


*/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int findMin(vector<int> &nums) {
    int mn = nums[0];
    for(int num:nums) mn = min(mn, num);
    return mn; 
}

int main() {
    fastio;

    int t;
    cin >> t;
    while(t) {
        int numCount;
        cin >> numCount;
        vector<int> nums(numCount, 0);
        for(int i=0;i<numCount;i++) cin >> nums[i];
        int minimum = findMin(nums);
        cout << minimum << "\n";
        t--;
    }
    return 0;
}