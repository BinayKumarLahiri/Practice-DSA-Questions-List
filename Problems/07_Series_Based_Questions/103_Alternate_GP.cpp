/*TCS Coding question – 1
Consider the following series: 1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187…
This series is a mixture of 2 series – all the odd terms in this series form a geometric
series and all the even terms form yet another geometric series. Write a program to
find the Nth term in the series.
The value N is a positive integer that should be read from STDIN. The Nth term that
is calculated by the program should be written to STDOUT. Other than the value of
the nth term, no other character/string or message should be written to STDOUT. For
example, if N=16, the 16th term in the series is 2187, so only value 2187 should be
printed to STDOUT.
You can assume that N will not exceed 30.

TEST CASES:
15
1
2
3
4
5
6
7
8
11
12
15
16
20
25
30


OUTPUT:
1
1
2
3
4
9
8
27
32
243
128
2187
19683
4096
4782969

*/

#include <bits/stdc++.h>
using namespace std;
int element(int n) {
    if(n%2==0) {
        return (int)pow(3, n/2-1);
    }else {
        return (int)pow(2, n/2);
    }
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cout<<element(n)<<"\n";
    }
    return 0;
}