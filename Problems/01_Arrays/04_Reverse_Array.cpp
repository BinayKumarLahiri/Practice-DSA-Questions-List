/*
Reverse a given Array
Problem Statement: You are given an array. The task is to reverse the array and print it. 

Examples:

Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

Example 2:
Input: N=6 arr[] = {10,20,30,40}
Output: {40,30,20,10}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

TEST CASES:
10
5
5 4 3 2 1
4
10 20 30 40
1
100
2
1 2
6
1 1 2 2 3 3
5
-1 -2 -3 -4 -5
3
10 20 10
4
0 0 1 1
0

7
9 8 7 6 5 4 3

EXPECTED OUTPUT:
1 2 3 4 5
40 30 20 10
100
2 1
3 3 2 2 1 1
-5 -4 -3 -2 -1
10 20 10
1 1 0 0

3 4 5 6 7 8 9

*/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

void reverseArr(vector<int> &arr) {
    for(int i=0, j=(int)arr.size()-1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for(int i=0;i<n;i++) cin >> arr[i];
        reverseArr(arr);
        for(int i=0;i<n-1;i++) cout << arr[i] << " ";
        if(n>0)cout << arr[n-1] << "\n";
        else cout<<"\n";
        t--;
    }
    return 0;
}