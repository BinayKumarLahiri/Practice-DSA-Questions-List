/*
Count frequency of each element in the array
Problem statement: Given an array, we have found the number of occurrences of each element in the array.

Examples:

Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
     5  2
    15  1
Explanation: 10 occurs 3 times in the array
    5 occurs 2 times in the array
    15 occurs 1 time in the array

Example2: 
Input: arr[] = {2,2,3,4,4,2};
Output: 2  3
    3  1
    4  2
Explanation: 2 occurs 3 times in the array
        3 occurs 1 time in the array
        4 occurs 2 time in the array


TEST CASES:
10
6
10 5 10 15 10 5
6
2 2 3 4 4 2
1
100
4
1 2 3 4
5
7 7 7 7 7
6
0 -1 0 -1 2 2
8
10 20 10 20 30 40 30 40
3
1 2 1
5
1000 1000 500 100 500
2
-5 -5

EXPECTED OUTPUT:
10 3, 5 2, 15 1
2 3, 3 1, 4 2
100 1
1 1, 2 1, 3 1, 4 1
7 5
0 2, -1 2, 2 2
10 2, 20 2, 30 2, 40 2
1 2, 2 1
1000 2, 500 2, 100 1
-5 2

*/ 

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

vector<vector<int>> countFreq(vector<int> &arr) {
    map<int, int> mp;
    vector<vector<int>> ans;
    for(int num:arr)mp[num]++;
    for(auto it=mp.begin();it!=mp.end();it++) {
        ans.push_back({it->first, it->second});
    }
    return ans;
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
        vector<vector<int>> freq = countFreq(arr);
        for(int i=0;i<(int)freq.size()-1;i++) cout << freq[i][0] << " " << freq[i][1] << ", ";
        if(freq.size() > 0) cout << freq[(int)freq.size()-1][0] << " " << freq[(int)freq.size()-1][1] << "\n";
        else cout << "\n";
        t--;
    }   
    return 0;
}