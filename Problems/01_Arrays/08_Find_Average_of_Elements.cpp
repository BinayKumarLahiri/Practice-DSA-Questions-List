/*
Average of all the elements in the array
Problem Statement: Given an array, we have to find the average of all the elements in the array.

Examples:

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 3
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+3+4+5)/5 = 3.

Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 1.8
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+1+1+5+1)/6 = 1.8

TEST CASES:
10
5
1 2 3 4 5
6
1 2 1 1 5 1
1
42
3
10 20 30
4
1 2 3 4
5
-10 -5 0 5 10
2
7 8
6
10 10 10 10 10 10
4
100 200 300 400
5
1 1 2 2 3

EXPECTED OUTPUT:
3.0
1.8
42.0
20.0
2.5
0.0
7.5
10.0
250.0
1.8

*/ 

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
double average(vector<int> &arr) {
    double sum = 0;
    for(int num:arr) sum += num;
    return sum / (double)arr.size(); 
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin>>arr[i];
        double avg = average(arr);
        printf("%.1f\n", avg);
        t--;
    }
    return 0;
}