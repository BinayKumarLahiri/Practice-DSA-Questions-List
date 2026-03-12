/**
Find Count of Elements Greater Than All Prior Elements
Problem: Given an integer array Arr , find the count of elements whose
value is greater than all of its prior elements.
Test Case:
Input: Arr = [7,4,8,2,9]
Output: 3

TEST CASES:
12
5
7 4 8 2 9
5
1 2 3 4 5
5
5 4 3 2 1
1
10
6
3 3 3 3 3 3
4
-5 -2 -10 0
7
2 10 10 11 5 11 15
5
0 0 0 0 0
8
1 5 2 6 3 7 4 8
3
10 20 15
5
-1 -2 -3 -4 -5
6
10 5 20 15 30 25

OUTPUT:
3
5
1
1
1
3
4
1
5
2
1
3

*/

#include <bits/stdc++.h>
using namespace std;
int countMaxElements(vector<int> &nums) {
    int mx = INT_MIN;
    int count = 0;
    for(int num:nums) {
        if(num > mx) count++;
        mx = max(mx, num);
    }
    return count;
}
int main() {
    int t;
    cin>>t;
    while(t) {
        int n;
        cin>>n;
        vector<int> nums(n, 0);
        for(int i=0;i<n;i++)cin>>nums[i];
        cout<<countMaxElements(nums)<<"\n";
        t--;
    }
    return 0;
}