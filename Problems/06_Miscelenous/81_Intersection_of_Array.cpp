/*
Intersection of Two Arrays
Problem: Find the intersection of two arrays.
Test Case:
Input: nums1 = [1, 2, 2, 1], nums2 = [2, 2]
Output: [2]

TEST CASE:
12
4 2
1 2 2 1
2 2
4 4
4 9 5
9 4 9 8 4
3 3
1 2 3
4 5 6
2 5
1 2
1 2 1 2 1
5 5
0 0 0 0 0
0 0 0 0 0
4 3
-1 -2 3 4
-2 4 10
1 1
10
10
4 4
10 20 30 40
40 30 20 10
3 1
1 2 3
4
2 4
5 10
1 2 5 10
3 2
100 200 300
100 300
5 3
1 2 3 4 5
6 7 8

OUTPUT:
2
4 9

1 2
0
-2 4
10
10 20 30 40

5 10
100 300


*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
    unordered_set<int> s1(arr1.begin(), arr1.end()),s2(arr2.begin(), arr2.end());
    vector<int> ans;
    for(int num:arr1) {
        if(s1.count(num) && s2.count(num)) {
            ans.push_back(num);
            s1.erase(num);
            s2.erase(num);
        }
    }
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n1, n2;
        cin>>n1>>n2;
        vector<int> arr1(n1), arr2(n2);
        for(int i=0;i<n1;i++)cin>>arr1[i];
        for(int i=0;i<n2;i++)cin>>arr2[i];
        vector<int> ans = intersection(arr1, arr2);
        for(int num:ans)cout<<num<<" ";
        cout<<"\n";
        t--;
    }
    return 0;
}