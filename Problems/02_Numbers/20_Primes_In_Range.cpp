/*
Prime Numbers in a given range
Problem Statement: Given a and b, find prime numbers in a given range [a,b], (a and b are included here).

Examples:

Examples:
Input: 2 10
Output: 2 3 5 7 
Explanation: Prime Numbers b/w 2 and 10 are 2,3,5 and 7.

Example 2:
Input: 10 16
Output: 11 13 
Explanation: Prime Numbers b/w 10 and 16 are 11 and 13.

TEST CASES:
15
2 10
10 16
1 5
20 30
1 2
7 7
14 15
90 100
1 1
100 120
990 1000
2 2
50 50
0 10
1000 1020

OUTPUT:
2 3 5 7
11 13
2 3 5
23 29
2
7

97

101 103 107 109 113
991 997
2

2 3 5 7
1009 1013 1019

*/

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool checkPrime(int num) {
    if(num < 2) return false;
    for(int i=2;i<=sqrt(num);i++) {
        if(num % i == 0) return false;
    }
    return true;
}
vector<int> primesInRange(int start, int end) {
    vector<int> primes;
    for(int i=start;i<=end;i++) if(checkPrime(i)) primes.push_back(i);
    return primes;
}
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t) {
        int start, end;
        cin >> start >> end;
        vector<int> primes = primesInRange(start, end);
        for(int n:primes) cout<<n<<" ";
        cout<<"\n";
        t--;
    }
}