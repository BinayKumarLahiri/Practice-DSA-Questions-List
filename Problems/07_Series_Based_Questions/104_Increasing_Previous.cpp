/*TCS Coding Questions – 2
Consider the following series: 0,0,2,1,4,2,6,3,8,4,10,5,12,6,14,7,16,8
This series is a mixture of 2 series all the odd terms in this series form even numbers
in ascending order and every even term is derived from the previous term using the
formula (x/2).
Write a program to find the nth term in this series.
The value n is a positive integer that should be read from STDIN the nth term that is
calculated by the program should be written to STDOUT. Other than the value of the
nth term no other characters /strings or message should be written to STDOUT.
For example, if n=10, the 10 th term in the series is to be derived from the 9th term
in the series. The 9th term is 8 so the 10th term is (8/2)=4. Only the value 4 should be
printed to STDOUT.
You can assume that the ‘n’ will not exceed 20,000

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
9
10
15
16
20
100
20000

OUTPUT:
0
0
2
1
4
2
6
3
8
4
14
7
9
49
9999

*/


#include <bits/stdc++.h>
using namespace std;
int element(int n) {
    if(n%2 != 0) {
        return n-1;
    }else {
        return (n-1)/2;
    }
}
int main() {
    int t;
    cin>> t;
    while(t--) {    
        int n;
        cin>>n;
        cout<<element(n)<<"\n";
    }
    return 0;
}