/*Two Sum
Problem: Find two numbers in an array that add up to a specific target.
Test Case:
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]

TEST CASES:
12
4 9
2 7 11 15
3 6
3 2 4
2 6
3 3
4 10
1 5 5 9
5 0
-3 4 3 9 0
6 100
50 20 30 80 50 10
4 -2
-1 -1 -3 5
5 0
0 4 3 0 9
3 10
5 15 -5
6 7
1 2 3 4 5 6
4 8
4 4 4 4
5 10
1 2 3 4 5

OUTPUT:
0 1
1 2
0 1
1 2
0 2
1 3
0 1
0 3
1 2
2 3
0 1
-1 -1

*/

#include <bits/stdc++.h>
using namespace std;
pair<int, int> twoSum(vector<int> &arr, int target) {
    unordered_map<int, int> mp;
    for(int i=0;i<arr.size();i++) {
        if(mp.find(target - arr[i]) != mp.end()) return {mp[target-arr[i]], i};
        mp[arr[i]] = i; 
    }
    return {-1, -1};
}
int main() {
    int t;
    cin>>t;
    while(t) {
        int n, target;
        cin>>n>>target;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        pair<int, int> pos = twoSum(arr, target);
        cout<<pos.first<<" "<<pos.second<<"\n";
        t--;
    }
    return 0;
}