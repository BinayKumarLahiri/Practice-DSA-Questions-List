/*Find the Subarray with the Largest Sum
Problem: Given an integer array nums , find the subarray with the largest
sum and return its sum.
Test Case:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
*/

#include <bits/stdc++.h>
using namespace std;
// int maxSum(vector<int> &arr) {
//      //Time Complextiy: O(n^2)
//     int maxSum = arr[0];
//     for(int i=0;i<arr.size();i++) {
//         int sum = 0;
//         for(int j=i;j<arr.size();j++)  {
//             sum += arr[j];
//             maxSum = max(maxSum, sum);
//         }
//     }
//     return maxSum;
// }

int maxSum(vector<int> &arr) {
    //Time Complextiy: O(n)
    int maxSum = arr[0];
    int currMax = arr[0];
    for(int i=1;i<arr.size();i++) {
        currMax = max(arr[i], currMax + arr[i]);
        maxSum = max(maxSum, currMax);
    }
    return maxSum;
}
int main() {
    int t;
    cin>> t;
    while(t) {
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)cin>>arr[i];
        cout<<maxSum(arr)<<"\n";
        t--;
    }
    return 0;
}