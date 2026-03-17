/*
Q3. Chocolate Packets — Move Empty Packets to End ■ VERIFIED PYQ [Easy]
Problem A factory produces N chocolate packets. Empty (defective) packets are represented as 0. Push all empty packets (0s) to the 
end of the array while maintaining the relative order of non-zero (filled) packets. Input: First line = N (number of packets). 
Second line = N space-separated integers.
Constraints 1 <= N <= 10**5
Sample Input
8
4 5 0 1 9 0 5 0
Sample Output
4 5 1 9 5 0 0 0

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
void moveEmptyToLast(vector<int>& arr) {
    for(int i=0, count=0;i<arr.size();i++) {
        if(arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        moveEmptyToLast(arr);
        for(int num:arr)cout<<num<<" ";
        cout<<"\n";
    }
    return 0;
}