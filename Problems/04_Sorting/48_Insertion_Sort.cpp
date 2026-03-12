/*
Insertion Sort Algorithm
Problem Statement: Given an array of N integers, write a program to implement the Insertion sorting algorithm.

Examples:

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: 
After sorting the array is: 9,13,20,24,46,52


Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1,2,3,4,5

TEST CASES:
15
6 13 46 24 52 20 9
5 5 4 3 2 1
1 10
2 20 10
5 1 2 3 4 5
6 10 10 10 10 10 10
7 -1 -5 0 10 -2 3 4
3 3 2 1
4 100 50 75 25
8 8 7 6 5 4 3 2 1
2 1 2
5 0 0 1 0 0
6 12 11 10 9 8 7
4 4 3 2 1
10 10 9 8 7 6 5 4 3 2 1

OUTPUT:
9 13 20 24 46 52
1 2 3 4 5
10
10 20
1 2 3 4 5
10 10 10 10 10 10
-5 -2 -1 0 3 4 10
1 2 3
25 50 75 100
1 2 3 4 5 6 7 8
1 2
0 0 0 0 1
7 8 9 10 11 12
1 2 3 4
1 2 3 4 5 6 7 8 9 10
*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
void customSort(vector<int> &arr) {
    int size = arr.size();
    for(int i=1;i<size;i++) {
        int n = arr[i];
        int j = i;
        while(j>0 && arr[j-1]>n) {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = n;
    }
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin>>arr[i];
        customSort(arr);
        for(int num:arr)cout<<num<<" ";
        cout<<"\n";
        t--;
    }
    return 0;
}
