/*Write an algorithm to determine if a number n is happy.
A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.
Example 1:
Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
Example 2:
Input: n = 2
Output: false

TEST CASES:
15
19
2
1
7
11
100
4
28
44
123
10
8
20
94
2147483647

OUTPUT:
True
False
True
True
False
True
False
True
True
False
True
False
False
True
False
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool isHappy(int n) {
    if(n==1 || n==7) return true;
    if(n<10) return false;

    int sum = 0;
    while(n) {
        sum += (n%10)*(n%10);
        n /= 10;
    }
    return isHappy(sum);
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        if(isHappy(n))cout<<"True\n";
        else cout<<"False\n";
    }
    return 0;
}