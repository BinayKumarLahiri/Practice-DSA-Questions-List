/*
Remove Duplicates in-place from Sorted Array
Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.

Examples:

Example 1: 

Input: arr[1,1,2,2,2,3,3]

Output: arr[1,2,3,_,_,_,_]

Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.

Example 2: 

Input: arr[1,1,1,2,2,3,3,3,3,4,4]

Output: arr[1,2,3,4,_,_,_,_,_,_,_]

Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.

TEST CASES:
10
7
1 1 2 2 2 3 3
11
1 1 1 2 2 3 3 3 3 4 4
1
10
2
1 2
3
1 1 1
5
1 2 2 3 3
6
-5 -5 -3 -3 0 0
4
10 20 30 40
8
1 1 1 1 2 2 2 2
5
100 100 100 100 100

OUTPUT:
3
4
1
2
1
3
3
4
2
1

*/ 

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int removeDuplicate(vector<int> &arr) {
    int len = (int)arr.size();
    int i=0, j=1;
    while(j < len) {
        if(arr[j] == arr[i]) j++;
        else arr[++i] = arr[j++];
    }
    return i+1;
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
        int count = removeDuplicate(arr);
        cout << count << "\n";
        t--;
    }
    return 0;
}