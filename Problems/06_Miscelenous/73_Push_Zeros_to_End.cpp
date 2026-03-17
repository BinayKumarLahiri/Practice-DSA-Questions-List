/*Push Empty Packets to the End of the Array
Problem: Given an array of integer values, find all empty packets
(represented by 0 ) and push them to the end of the array.
Test Case:
Input: arr = [2, 0, 3, 0, 5]
Output: [2, 3, 5, 0, 0]

TEST CASES:
12
5
2 0 3 0 5
4
0 0 0 1
4
1 0 0 0
5
0 0 0 0 0
5
1 2 3 4 5
6
0 1 0 3 12 0
2
0 0
1
0
1
7
3
0 5 0
8
4 0 5 0 6 0 0 8
5
-1 0 -2 0 3

OUTPUT:
2 3 5 0 0
1 0 0 0
1 0 0 0
0 0 0 0 0
1 2 3 4 5
1 3 12 0 0 0
0 0
0
7
5 0 0
4 5 6 8 0 0 0 0
-1 -2 3 0 0


TEST CASES:
15
8
4 5 0 1 9 0 5 0
5
0 0 0 0 1
5
1 0 0 0 0
3
0 0 0
4
1 2 3 4
1
0
1
7
10
0 1 0 3 12 0 0 5 0 9
6
-1 0 -5 0 10 0
5
100 200 300 400 500
7
0 0 5 0 0 2 1
2
0 8
2
8 0
8
1 0 2 0 3 0 4 0
12
0 0 0 1 1 1 0 0 0 2 2 2


OUTPUT:
4 5 1 9 5 0 0 0
1 0 0 0 0
1 0 0 0 0
0 0 0
1 2 3 4
0
7
1 3 12 5 9 0 0 0 0 0
-1 -5 10 0 0 0
100 200 300 400 500
5 2 1 0 0 0 0
8 0
8 0
1 2 3 4 0 0 0 0
1 1 1 2 2 2 0 0 0 0 0 0

*/

#include <bits/stdc++.h>
using namespace std;
void pushZeros(vector<int> &arr) {
    int i=0,j=0;
    while(j<arr.size()) {
        if(arr[i] != 0)i++;
        else if(arr[j] != 0)  {
            arr[i++] = arr[j];
            arr[j] = 0;
        }
        j++;
    }
}
int main() {
    int t;
    cin>> t;
    while(t) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        pushZeros(arr);
        for(int num:arr)cout<<num<<" ";
        cout<<"\n";
        t--;
    }
    return 0;
}