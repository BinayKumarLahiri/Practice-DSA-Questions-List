/*
Check if the number is an abundant number or not
Problem Statement: Check if the number is an abundant number or not.

Examples:

Example 1:
Input: 18
Output: Abundant Number
Explanation: Divisors of 18 are 1,2,3,6,9. 1+2+3+6+9=21, Since 21 is greater than 18, 18 is an abundant number.

Example 2:
Input: 21
Output: Not Abundant Number
Explanation:Divisors of 21 are 1,3,7. 1+3+7=11, Since 11 is smaller than 21, 11 is not an abundant number.

TEST CASES:
15
12
18
21
6
28
10
24
30
13
40
48
50
945
120
16
OUTPUT:
Abundant Number
Abundant Number
Not Abundant Number
Not Abundant Number
Not Abundant Number
Not Abundant Number
Abundant Number
Abundant Number
Not Abundant Number
Abundant Number
Abundant Number
Not Abundant Number
Abundant Number
Abundant Number
Not Abundant Number
*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool isAbundant(int n) {
    if(n < 2) return false;
    int sum = 0;
    for(int i=1;i<n;i++) if(n%i==0)sum += i;
    return sum > n;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        if(isAbundant(n)) cout << "Abundant Number\n";
        else cout << "Not Abundant Number\n";
        t--;
    }
    return 0;
}
