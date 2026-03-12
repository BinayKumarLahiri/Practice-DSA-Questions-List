/*
Find the Total Number of Subarrays with Given Sum
Problem: Given an array of integers and an integer sum , return the total
number of subarrays whose sum equals sum .
Test Case:
Input: nums = [1, 2, 3, 1, 1, 1], sum = 3
Output: 4

TEST CASES:
15
6 3
1 2 3 1 1 1
3 2
1 1 1
3 3
1 2 3
4 0
0 0 0 0
5 0
1 -1 1 -1 0
4 5
1 2 3 4
3 10
10 10 10
6 0
-1 1 -2 2 -3 3
5 2
2 4 1 2 -1
1 5
5
1 0
5
5 -5
1 -1 2 -2 3
4 2
1 1 1 1
7 7
3 4 7 2 -3 1 4
5 3
1 2 1 2 1


OUTPUT:
3
2
2
10
7
1
3
6
3
1
0
0
3
3
4

*/

#include <bits/stdc++.h>
using namespace std;
// int countSubsets(vector<int> &nums, int target) {
//     // Time Conplexity: O(n^2), Space Complexity: O(1)
//     int count = 0;
//     for(int i=0;i<nums.size();i++) {
//         int sum = 0;
//         for(int j=i;j<nums.size();j++) {
//             sum += nums[j];
//             if(sum == target)count++;
//         }
//     }
//     return count;
// }
int countSubsets(vector<int> &nums, int target) {
    // Time Conplexity: O(n), Space Complexity: O(n)
    map<int, int> mp;
    mp[0] = true;
    int count = 0;
    int sum = 0;
    for(int i=0;i<nums.size();i++) {
        sum += nums[i];
        count += mp[sum-target];
        mp[sum]++;
    }
    return count;
}
int main() {
    int t;
    cin>>t;
    while(t) {
        int n, target;
        cin>>n>>target;
        vector<int> nums(n, 0);
        for(int i=0;i<n;i++)cin >> nums[i];
        cout<<countSubsets(nums, target)<<"\n";
        t--;
    }
    return 0;
}