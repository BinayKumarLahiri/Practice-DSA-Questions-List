/*
Q2. Count Subsets with Given Sum ■ VERIFIED PYQ [Hard]
Problem Given an array of integers and a target sum S, count all subsets of the array whose elements sum equals S. Since the result can be very large, print the value modulo 10^9+7. Input: First line = T (test cases). Each test case: first line = n (array size), second line = n space-separated integers, third line = target sum.
Constraints 1<=T<=100, 1<=n<=103, 1<=a[i]<=103, 1<=sum<=10**3
*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int count(vector<int> &arr, int index, int target, vector<vector<int>> &dp) {
    if(target == 0) return 1;
    if(index == 0) return arr[index] == target?1:0;
    if(dp[index][target] != -1) return dp[index][target];
    int skip = count(arr, index-1, target, dp);
    int take = 0;
    if(arr[index] <= target) {
        take = count(arr, index-1, target-arr[index], dp);
    }
    return dp[index][target] =  skip+take ;
}
int subArrayCount(vector<int> &arr, int target) {
    vector<vector<int>> dp(arr.size()+1, vector<int>(1001, -1));
    return count(arr, arr.size()-1, target, dp);
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n, target;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        cin>>target;
        cout<<subArrayCount(arr, target)<<"\n";
        t--;
    }
    return 0;
}