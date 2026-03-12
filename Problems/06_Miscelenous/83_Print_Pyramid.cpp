/*
Print a Special Pyramid from an Input Array
Problem: Given a height h and an input array arr , print a special
pyramid where numbers less than 5 must be padded with zeroes.
Test Case:
Input: height = 3, arr = [6, 28, 66, 120, 190, 276]
Output:
00006
00028 00066
00120 00190 00276

TEST CASES:
12
3
6
6 28 66 120 190 276
1
1
5
2
3
1 2 3
2
3
10000 500 1
3
6
0 0 0 0 0 0
4
10
1 2 3 4 5 6 7 8 9 10
2
3
-1 -25 -500
2
3
99999 100000 5
1
1
123456
3
6
10 20 30 40 50 60
2
3
7 7 7
5
15
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1


OUTPUT:
00006
00028 00066
00120 00190 00276
00005
00001
00002 00003
10000
00500 00001
00000
00000 00000
00000 00000 00000
00001
00002 00003
00004 00005 00006
00007 00008 00009 00010
-0001
-0025 -0500
99999
100000 00005
123456
00010
00020 00030
00040 00050 00060
00007
00007 00007
00001
00001 00001
00001 00001 00001
00001 00001 00001 00001
00001 00001 00001 00001 00001

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
void printPattern(vector<int> &arr, int height) {
    int k = 0;
    for(int i=1;i<=height;i++) {
        for(int j=0;j<i;j++) {
            printf("%05d ", arr[k++]);
        }
        printf("\n");
    }
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int height, n;
        cin >> height >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        printPattern(arr, height);
        t--;
    }
    return 0;
}