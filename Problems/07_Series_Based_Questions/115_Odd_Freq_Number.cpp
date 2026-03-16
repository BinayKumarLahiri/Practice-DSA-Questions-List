/*
Q1. Odd Occurring Element in O(log N) ■ VERIFIED PYQ [Hard]
Problem Given an array of integers where every element appears an even number of times except one element which appears an odd number of times, find that odd-occurring element in O(log N) time. Conditions: Equal elements must appear in pairs in the array; no more than two consecutive occurrences of any element are allowed. Example of INVALID input (3 consecutive 2s): 7 → 1 1 2 2 2 3 3 Example of VALID input: 5 → 2 2 3 1 1 → Answer: 3
Constraints 1 <= N <= 10**5 (N is always odd)
Sample Input
5
2 2 3 1 1
Sample Output
3
Explanation Element 3 appears once (odd), while 2 and 1 each appear twice (even).

TEST CASES:
15
5
2 2 3 1 1
7
1 1 2 2 3 4 4
3
10 20 20
3
5 5 8
1
42
9
1 1 2 2 3 3 4 5 5
11
1 1 3 3 5 5 7 7 9 10 10
7
10 10 20 30 30 40 40
5
1 2 2 3 3
13
1 1 2 2 3 3 4 5 5 6 6 7 7
9
7 7 8 8 1 1 2 3 3
7
5 5 4 4 3 2 2
5
9 9 10 10 11
3
0 0 1
11
1 1 2 2 3 3 4 4 5 6 6


OUTPUT:
3
3
10
8
42
4
9
20
1
4
2
3
11
1
5

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int oddOne1(vector<int> &arr) {
    // Time Complexity: O(n)
    int odd = 0;
    for(int num:arr) odd ^= num;
    return odd;
}
int oddOne(vector<int> &arr) {
    // Time Complexity: O(log(n))
    int low=0,high=arr.size()-1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (mid % 2 == 1) mid--;
        if (arr[mid] == arr[mid + 1]) {
            low = mid + 2;
        } else {
            high = mid;
        }
    }
    return arr[low];
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        cout<<oddOne(arr)<<"\n";
        t--;
    }
    return 0;
}