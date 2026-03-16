/*  TCS Ninja Mock test questions – Coding section
    Consider the below series:
    1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17, …
    This series is a mixture of 2 series – all the odd terms in this series form a Fibonacci
    series and all the even terms are the prime numbers in ascending order.
    Write a program to find the Nth term in this series.
    The value N is a Positive integer that should be read from STDIN. The Nth term that
    is calculated by the program should be written to STDOUT. Other than the value
    of Nth term, no other characters/strings or message should be written to STDOUT.
    For example, when N = 14, the 14th term in the series is 17. So only the value 17
    should be printed to STDOUT

TEST CASES:
14
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
11
12
13
14


OUTPUT:
1
2
1
3
2
5
3
7
5
11
8
13
13
17

*/


#include <bits/stdc++.h>
using namespace std;
int fibbo(int n) {
    if(n<2) return 1;
    else return fibbo(n-1) + fibbo(n-2);
}
bool checkPrime(int num) {
    if(num < 2) return false;
    for(int i=2;i<=sqrt(num);i++) {
        if(num % i == 0) return false;
    }
    return true;
}
int prime(int n) {
    int count = 0; // Tracks how many primes we've found
    int i = 2;     // The number we are checking
    
    while (true) {
        if (checkPrime(i)) {
            if (count == n) return i; // Return exactly when we hit the n-th prime
            count++;
        }
        i++;
    }
}

int element(int n) {
    if(n%2!=0) {
        // Return the Fibbonacci Number at n/2 index
        return fibbo(n/2);
    }else {
        // return the Prime number at n/2-1 index
        return prime(n/2-1);
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