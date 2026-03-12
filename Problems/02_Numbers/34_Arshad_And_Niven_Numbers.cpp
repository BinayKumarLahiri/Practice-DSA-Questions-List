/*
Check if the given number is Harshad(Or Niven) Number
Problem Statement: Check if the number is a Harshad(or Niven) number or not.

Examples:

Example 1:
Input: 378
Output: Yes it is a Harshad number.
Explanation: 3+7+8=18. 378 is divisible by 18. Therefore 378 is a harshad number.

Example 2:
Input: 379
Output: No
 it is not a Harshad number.
Explanation: 3+7+9=19. 379 is not divisible by 19. Therefore 379 is a harshad number.

TEST CASES:
15
18
378
379
1
9
10
21
153
100
481
1008
111
200
999
50

OUTPUT:
YES
YES
NO
YES
YES
YES
YES
YES
YES
YES
YES
YES
YES
YES
YES
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool isNiven(int n) {
    int sum = 0;
    for(int i=n;i!=0;i/=10)sum += (i%10);
    if(sum == 0)return false;
    return n%sum == 0;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        if(isNiven(n)) cout << "YES\n";
        else cout << "NO\n";
        t--;
    }
    return 0;
}
