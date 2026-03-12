/*
Find all repeating elements in an array
Problem Statement: Find all the repeating elements present in an array.

Examples:

Example 1:
Input: 
Arr[] = [1,1,2,3,4,4,5,2]
Output:
 1,2,4
Explanation:
 1,2 and 4 are the elements which are occurring more than once.

Example 2:
Input:
 Arr[] = [1,1,0]
Output:
 1
Explanation:
 Only 1 is occurring more than once in the given array.


 TEST CASES:
 10
8
1 1 2 3 4 4 5 2
3
1 1 0
1
42
5
1 2 3 4 5
6
10 20 10 20 30 30
4
7 7 7 7
5
-1 -2 -1 -3 -2
8
0 5 0 5 1 2 1 2
2
10 10
6
4 3 2 1 4 3

OUTPUT:
1 2 4
1

10 20 30
7
-1 -2
0 5 1 2
10
4 3

*/ 

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
vector<int> findRepeatedElements1(vector<int> &arr) {
    map<int, int> mp;
    vector<int> ans;
    for(int num:arr) mp[num]++;
    for(auto it=mp.begin(); it!=mp.end();it++) if(it->second > 1) ans.push_back(it->first);
    return ans;
}
vector<int> findRepeatedElements(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    vector<int> ans;
    int curr = arr[0];
    for(int i=1;i<(int) arr.size();i++) {
        if(arr[i] != curr) {
            curr = arr[i];
        }else {
            if(ans.size() == 0 || ans[ans.size()-1] != curr) {
                ans.push_back(curr);
            }
        }
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
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin >> arr[i];
        vector<int> repeatedEle = findRepeatedElements(arr);
        for(int num:repeatedEle) cout << num << " ";
        cout << "\n";
        t--;
    }
    return 0;
}