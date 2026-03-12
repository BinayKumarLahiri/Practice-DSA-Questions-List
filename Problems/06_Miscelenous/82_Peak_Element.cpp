/*
Find Peak Element
Problem: Find a peak element in an array where a peak is an element
greater than its neighbors.
Test Case:
Input: arr = [1, 2, 3, 1]
Output: 2   


TEST CASES:
12
4
1 2 3 1
7
1 2 1 3 5 6 4
3
1 2 3
3
3 2 1
1
10
2
1 2
2
2 1
5
10 20 15 2 23
4
1 5 10 20
4
20 10 5 1
3
1 3 2
6
1 2 3 4 5 6


OUTPUT:
2
5
2
0
0
1
0
1
3
0
1
5

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int peak(vector<int> &arr) {
    int low = 0, high = arr.size()-1;
    while(low < high) {
        int mid = low + (high-low)/2;
        if(arr[mid] < arr[mid+1]) low = mid+1;
        else high = mid;
    }
    return low;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        cout<<peak(arr)<<"\n";
        t--;
    }
    return 0;
}