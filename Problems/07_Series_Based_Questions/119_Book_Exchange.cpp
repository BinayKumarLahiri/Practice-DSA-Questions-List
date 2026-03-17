/*
Q5. Book Exchange — Derangement Count ■ VERIFIED PYQ [Hard]
Problem A teacher distributes N books to N students and wants to exchange them weekly so every student gets a different book 
(not their own). Find the total number of valid exchanges (derangements) modulo 10^7+7. Example: N=4 → 9 valid exchanges 
(no student gets their original book).
Constraints 1 <= N <= 1000000
Sample Input
4
Sample Output
9
*/

#include <bits/stdc++.h>
using namespace std;
// int validExchangeCount(int n) {
//     // Time Complexity: O(2^n)
//     int m = 1e9+7;
//     if(n==1) return 0;
//     if(n==2) return 1;
//     int fn_1 = validExchangeCount(n-1);
//     int fn_2 = validExchangeCount(n-2);
//     return (((n-1) % m) * ((fn_1 + fn_2)%m)) % m;
// }
int validExchangeCount(int n) {
    // Time Complexity: O(n)
    int m = 1e9+7;
    if(n==1) return 0;
    if(n==2) return 1;
    int prev = 0;
    int curr = 1;
    for(int i=3;i<=n;i++) {
        int t = ((i-1) * (prev + curr)) % m;
        prev = curr;
        curr = t;
    }
    return curr;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << validExchangeCount(n) << "\n";
    }
    return 0;
}