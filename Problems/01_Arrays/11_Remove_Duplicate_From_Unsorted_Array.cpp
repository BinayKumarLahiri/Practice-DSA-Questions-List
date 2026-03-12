/*
Remove Duplicates From an Unsorted Array
Problem Statement: Given an unsorted array, remove duplicates from the array.

Examples:

Example 1:
Input: arr[]={2,3,1,9,3,1,3,9}
Output:  {2,3,1,9}

Explanation: Removed all the duplicate elements

Example 2:
Input: arr[]={4,3,9,2,4,1,10,89,34}
Output: {3,4,9,2,1,10,34,89}
Explanation: Removed all the duplicate elements
TEST CASES:
10
8
2 3 1 9 3 1 3 9
9
4 3 9 2 4 1 10 89 34
1
5
5
1 1 1 1 1
3
10 20 30
6
1 2 3 1 2 3
4
-1 0 -1 2
5
100 50 100 50 10
7
7 6 5 4 3 2 1
4
2 2 1 1

OUTPUT:
2 3 1 9
4 3 9 2 1 10 89 34
5
1
10 20 30
1 2 3
-1 0 2
100 50 10
7 6 5 4 3 2 1
2 1


*/ 

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int removeDuplicates(vector<int> &arr) {
    int len = (int)arr.size();
    if(len == 0) return 0;
    map<int, int> mp;
    int i=0,j=0;
    while(j<len) {
        if(mp[arr[j]] == 0) {
            arr[i++] = arr[j];
            mp[arr[j]]++;
        }
        j++;
    }
    // return i>=len-1?i:i+1;
    return i;
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
        int count = removeDuplicates(arr);
        for(int i=0;i<count-1;i++) cout << arr[i] << " ";
        if(count > 0) cout << arr[count-1] << "\n";
        else cout << "\n";
        t--;
    }
    return 0;
}