/*
    Write a c program, to find the GCD of the given 2 numbers, using command line
    arguments. The input is 2 integer and the output GCD also should be an integer
    value.

TEST CASES:
15
12 18
10 20
7 13
1 100
45 45
0 5
81 153
17 89
24 60
100 80
31 62
270 192
4 8
99 33
500 120


OUTPUT:
6
10
1
1
45
5
9
1
12
20
31
6
4
33
20

*/

#include <bits/stdc++.h>
using namespace std;
int gcd(int num1, int num2) {
    if(num1 == 0 && num2 == 0) return -1;
    if(num1 == 0)return num2;
    if(num2 == 0)return num1;
    if(num1 > num2) return gcd(num2, num1);
    for(int i=num1;i>=1;i--) if((num1%i==0) && (num2%i==0)) return i;
    return 1;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int num1, num2;
        cin>>num1>>num2;
        cout<<gcd(num1, num2)<<"\n";
    }
    return 0;
}