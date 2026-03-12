/*
Check if a number is a Strong Number or not
Problem Statement: Given an integer Print “YES” if it is a strong number else print “NO”.

Note : 

When the sum of factorial of individual digits of a number is equal to the original number the number is called a strong number. 
Strong number is also known as Krishnamurthi number/Peterson Number.
Examples:

Examples 1:
Input: N = 145
Output: Yes
Explanation: 1! + 4! + 5! = 145. Hence 145 is a strong number. 

Example 2:
Input:  26
Output: No
Explanation: 2! + 6! = 722. Hence 26 is not a strong number.
TEST CASES:
15
1
2
145
40585
0
10
26
123
456
9
40584
500
144
3
100
OUTPUT:
YES
YES
YES
YES
NO
NO
NO
NO
NO
NO
NO
NO
NO
NO
NO
*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int factorial[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
bool isStrong(int n) {
    if(n == 0)return false;
    long long sum = 0;
    for(int i=n;i!=0;i/=10) {
        sum += factorial[i%10];
    }
    return sum == (long long)n;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        if(isStrong(n)) cout << "YES\n";
        else cout <<"NO\n";
        t--;
    }
    return 0;
}
