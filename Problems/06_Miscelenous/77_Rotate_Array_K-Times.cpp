/*
Print Array After It Is Right Rotated K Times
Problem: Rotate an array to the right K times and print the result.
Test Case:
Input: arr = [1, 2, 3, 4, 5], K = 2
Output: [4, 5, 1, 2, 3]
Source: GeeksforGeeks

TEST CASES:
15
5 2
1 2 3 4 5
6 3
10 20 30 40 50 60
4 4
1 2 3 4
3 0
5 10 15
5 7
1 2 3 4 5
1 10
42
2 1
1 2
6 1
1 2 3 4 5 6
5 4
1 2 3 4 5
4 2
0 0 1 1
3 5
-1 -2 -3
10 3
1 2 3 4 5 6 7 8 9 10
5 100
1 2 3 4 5
4 6
10 20 30 40
2 3
-10 10

OUTPUT:
4 5 1 2 3
40 50 60 10 20 30
1 2 3 4
5 10 15
4 5 1 2 3
42
2 1
6 1 2 3 4 5
2 3 4 5 1
1 1 0 0
-2 -3 -1
8 9 10 1 2 3 4 5 6 7
1 2 3 4 5
30 40 10 20
10 -10

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
void rotate(vector<int> &arr, int k) {
    int len = arr.size();
    k = k%len;
    reverse(arr.begin(), arr.begin()+len-k);
    reverse(arr.begin()+len-k, arr.end());
    reverse(arr.begin(), arr.end());
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        rotate(arr,k);
        for(int num:arr)cout<<num<<" ";
        cout<<"\n";
    }
    return 0;
}