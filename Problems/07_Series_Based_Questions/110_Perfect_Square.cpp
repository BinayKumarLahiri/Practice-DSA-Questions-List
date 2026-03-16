/*
Write a C program to check whether the given number is a perfect square or not
using command line arguments.

TEST CASE:
20
16
25
14
1
0
2
100
99
10000
8
49
50
121
144
125
400
10
64
81
15

OUTPUT:
Yes
Yes
No
Yes
Yes
No
Yes
No
Yes
No
Yes
No
Yes
Yes
No
Yes
No
Yes
Yes
No

*/


#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool isPerfectSquare(int num) {
    if(num == 0) return true;
    int i=1, j=num;
    while(i<=j) {
        int mid = i+(j-i)/2;
        if(mid*mid == num) return true;
        else if(mid*mid > num) j=mid-1;
        else i=mid+1;
    }
    return false;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int num;
        cin>>num;
        cout<<(isPerfectSquare(num)?"Yes":"No")<<"\n";
        t--;
    }
    return 0;
}