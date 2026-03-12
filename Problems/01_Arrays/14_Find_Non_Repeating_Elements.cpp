/*
Find all the non-repeating elements in an array
Problem Statement: Find all the non-repeating elements for a given array. Outputs can be in any order.

Examples:

Example 1:
Input:
 Nums = [1,2,-1,1,3,1]
Output:
 2,-1,3
Explanation:
 1 is the only element in the given array which occurs thrice in the array. -1,2,3 occurs only once and hence, these are non-repeating elements of the given array.

Example 2:
Input:
 Nums = [1,2,3]
Output:
 1,2,3
Explanation:
 All elements present in the array occur once. Hence, every element is non-repeating.

TEST CASE:
10
6
1 2 -1 1 3 1
3
1 2 3
1
99
5
5 5 5 5 5
8
10 20 30 10 20 40 50 60
4
0 1 0 1
6
-1 -2 -3 -1 -2 0
5
7 8 9 7 10
2
100 200
7
1 2 1 3 1 4 1

OUTPUT:
2 -1 3
1 2 3
99

30 40 50 60

-3 0
8 9 10
100 200
2 3 4


*/


#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
vector<int> findNonRepeatedElements(vector<int> &arr) {
    map<int, int> mp;
    vector<int> ans;
    for(int num:arr) mp[num]++;
    for(auto it=mp.begin(); it!=mp.end();it++) if(it->second == 1) ans.push_back(it->first);
    return ans;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin >> arr[i];
        vector<int> repeatedEle = findNonRepeatedElements(arr);
        for(int num:repeatedEle) cout << num << " ";
        cout << "\n";
        t--;
    }
    return 0;
}