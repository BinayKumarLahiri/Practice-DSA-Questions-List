/*
Adding Element in an Array
Problem Statement: Given an array of N integers, write a program to add an array element at the beginning, end, and at a specific position.

Example:
Input: N = 5, array[] = {1,2,3,4,5}
insertbeginning(6)
insertending(7)
insertatpos(8,4)
Output: 6,1,2,8,3,4,5,7
Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4

TEST CASES:
10
5
1 2 3 4 5
6 7 8 4
3
10 20 30
5 40 15 2
1
100
50 150 75 2
4
1 1 1 1
2 2 3 3
2
10 20
5 25 15 2
5
9 8 7 6 5
10 4 0 3
6
1 2 3 4 5 6
0 7 99 1
3
-1 -2 -3
0 -4 -5 4
4
10 10 10 10
20 20 30 5
5
1 2 4 5 6
0 7 3 3


OUTPUT:
6 1 2 8 3 4 5 7 
5 15 10 20 30 40 
50 75 100 150 
2 1 3 1 1 1 2 
5 15 10 20 25 
10 9 0 8 7 6 5 4 
99 0 1 2 3 4 5 6 7 
0 -1 -2 -5 -3 -4 
20 10 10 10 30 10 20 
0 1 3 2 4 5 6 7 

*/ 

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
void insert(vector<int> &arr, int val, int pos) {
    if (pos < 0 || pos > (int)arr.size()) {
        return; 
    }
    arr.push_back(0); 
    for (int i = (int)arr.size() - 1; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
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
        int x, y, z, p;
        cin >> x >> y >> z >> p;
        insert(arr, x, 0);
        arr.push_back(y);
        insert(arr, z, p-1);
        for(int i=0;i<(int)arr.size();i++) cout << arr[i] << " ";
        cout<<"\n";
        t--;
    }
    return 0;
}