/*
Write a c program that will find the sum of all prime numbers in a given range. The
range will be specified as command line parameters. The first command line
parameter, N1 which is a positive integer, will contain the lower bound of the range.
The second command line parameter N2, which is also a positive integer will contain
the upper bound of the range. The program should consider all the prime numbers
within the range, excluding the upper bound and lower bound. Print the output in
integer format to stdout. Other than the integer number, no other extra information
should be printed to stdout. Example Given inputs “7” and “24” here N1= 7 and
N2=24, expected output as 83.


TEST CASES:
15
7 24
1 10
10 20
2 5
20 30
1 2
100 110
13 17
10 11
1 100
50 60
2 10
19 23
70 80
90 100

OUPUT:
83
17
60
3
52
0
420
0
0
1060
112
15
0
223
97

*/


#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if(num < 2) return false;
    for(int i=2;i*i<=num;i++) if(num%i==0) return false;
    return true;
}
int sumOfPrime(int lower, int upper) {
    int sum = 0;
    for(int i=lower+1;i<upper;i++) {
        if(isPrime(i)) sum += i;
    }
    return sum;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int lower, upper;
        cin>>lower>>upper;
        cout<<sumOfPrime(lower, upper)<<"\n";
    }
    return 0;
}