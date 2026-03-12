/*
Find the Largest element in an array
Problem Statement: Given an array, we have to find the largest element in the array.

Examples:

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array. 

TEST CASES:
10
5
2 5 1 3 0
5
8 10 5 7 9
1
99
6
-5 -10 -2 -30 -1 -15
4
5 5 5 5
3
1000000 0 999999
5
-10 0 10 -20 20
7
1 2 3 4 5 6 7
2
-100 -50
6
12 45 67 23 9 45


EXPECTED OUTPUT:
5
10
99
-1
5
1000000
20
7
-50
67

*/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int findMax(vector<int> &nums) {
    int mx = nums[0];
    for(int num:nums) mx = max(mx, num);
    return mx;
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
        int maximum = findMax(nums);
        cout << maximum << "\n";
        t--;
    }
    return 0;
}