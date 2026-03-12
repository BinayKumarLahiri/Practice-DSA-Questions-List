/*
Write a program to sort characters in a string
Problem Statement:  Write a program to sort characters (numbers and punctuation symbols are not included) in a given string.

Examples:

Example 1:
Input: String str = “zxcbg”
Output: bcgxz
Explanation: After sorting we get string as bcgxz

Example 2:
Input: String str = “edcba”
Output: abcde
Explanation: After sorting we get string as abcde

TEST CASES:
15
zxcbg
edcba
TakeUForward
Programming
123abc456
Hello World!
A
AaBbCc
zZaA
!@#$
   
ZXYW
The quick brown fox
a1b2c3
Queue

OUTPUT:
1. bcgxz
2. abcde
3. FTUaadekorrw
4. Paggimmnorr
5. abc
6. HWdellloor
7. A
8. ABCabc
9. AZaz
10. 
11. 
12. WXYZ
13. Tbcefhiknooqruwx
14. abc
15. Qeeuu

*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

string sortLetter(string str) {
    string ans = "";
    for(char c:str) if((c>='a' && c<='z') || (c>='A' && c<='Z')) ans += c;
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;
    int i=1;
    while(t) {
        string str;
        getline(cin, str);
        cout<<i<<". "<<sortLetter(str)<<"\n";
        t--;
        i++;
    }
    return 0;
}
