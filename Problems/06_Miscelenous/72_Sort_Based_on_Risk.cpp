/*
Sort Array Based on Risk Levels
Problem: Given an array of risk levels (integers ranging from 0 to 2),
sort the array based on these risk levels.
Test Case:
Input: riskLevels = [2, 0, 1, 2, 1, 0]
Output: [0, 0, 1, 1, 2, 2]

TEST CASES:
12
6
2 0 1 2 1 0
3
0 0 0
3
1 1 1
3
2 2 2
5
2 1 0 1 2
2
1 0
2
2 1
6
0 1 2 0 1 2
1
0
4
2 2 1 1
10
0 1 2 2 1 0 0 1 2 1
3
2 1 0


OUTPUT:
0 0 1 1 2 2
0 0 0
1 1 1
2 2 2
0 1 1 2 2
0 1
1 2
0 0 1 1 2 2
0
1 1 2 2
0 0 0 1 1 1 1 2 2 2
0 1 2

*/

#include <bits/stdc++.h>
using namespace std;
// void sortByRisk(vector<int> &nums) {
//     // Time Complexity: O(n^2)
//     int f[] = {0,0,0};
//     for(int num:nums)f[num]++;
//     int k = 0;
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<f[i];j++) {
//             nums[k++] = i;
//         }
//     }
// }
void swap(vector<int> &nums, int i, int j) {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}
void sortByRisk(vector<int> &nums) {
    // Time Complexity: O(n)
    int low=0, mid=0, high=nums.size()-1;
    while(mid <= high) {
        if(nums[mid] == 0)swap(nums, low++, mid++);
        else if(nums[mid] == 1) mid++;
        else swap(nums, mid, high--);
    }
}
int main() {
    int t;
    cin>>t;
    while(t) {
        int n;
        cin>> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        sortByRisk(nums);
        for(int num:nums)cout<<num<<" ";
        cout<<"\n";
        t--;
    }
    return 0;
}