/*Excel Sheet Column Number
Problem: Convert a column title to a number in an Excel sheet.
Test Case:
Input: columnTitle = "AB"
Output: 28

TEST CASES:
15
A
B
Z
AA
AB
ZY
ZZ
AAA
ABC
FXSHRXW
ZA
AZ
BA
CA
ZZZ

OUTPUT:
1
2
26
27
28
701
702
703
731
2147483647
677
52
53
79
18278

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
long long toNumber(string str) {
    long long num = 0;
    long long p = 1;
    for(int i=str.size()-1;i>=0;i--) {
        num += p * (str[i]-'A'+1);
        p *= 26;
    }
    return num;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        string str;
        cin>>str;
        cout<<toNumber(str)<<"\n";
        t--;
    }
    return 0;
}