/*Majority Element
Problem: Find the majority element that appears more than half the time
in an array.
Test Case:
Input: arr = [3, 2, 3]
Output: 3

TEST CASES:
15
3
3 2 3
7
2 2 1 1 1 2 2
1
100
2
5 5
3
1 1 2
5
10 10 10 20 20
6
7 7 5 7 5 7
3
0 0 1
5
-1 -1 -1 2 2
4
8 8 7 8
7
1 2 1 3 1 4 1
5
5 4 5 4 5
6
1 1 2 2 1 1
3
-5 10 -5
4
0 1 0 0

OUTPUT:
3
2
100
5
1
10
7
0
-1
8
1
5
1
-5
0

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int findMajor(vector<int> &arr) {
    int major = arr[0];
    int count = 1;
    for(int i=1;i<arr.size();i++) {
        if(arr[i] == major)count++;
        else count--;

        if(count < 0) {
            major = arr[i];
            count = 1;
        }
    }
    return major;
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
        cout<<findMajor(arr)<<"\n";
        t--;
    }
    return 0;
}