/*
Remove Characters from first String present in the Second String
Problem Statement: Given two strings, write a program to remove characters from the first string which are present in the second string.

Examples:

Example 1:
Input: String str1 = “abcdef”
       String str2 = “cefz”
Output: abd
Explanation: The common characters in both strings are c, e, f.
So after removing these characters from string 1 we get string resulting string as abd.


Example 2:
Input: String str1 = “xyzpw”
       String str2 = “lmno”
Output: xyzpw
Explanation: As there is no common character in both the strings, string 1 remains unchanged.

TEST CASES:
15
abcdef
cefz
xyzpw
lmno
apple
peer
mississippi
ips
aaaaa
a
hello world
lo
12345
24
!@#$%
#$
AabbCc
abc
   
 
take u forward
aeiou
1001
0
zZz
Z
abc
ABC
keep these
e


OUTPUT:
1. abd
2. xyzpw
3. al
4. m
5. 
6. he wrd
7. 135
8. !@%
9. AC
10.   
11. tk  frwrd
12. 11
13. zz
14. abc
15. kp ths

*/  
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

string removeCommonChar(string str1, string str2) {
    bool f[256] = {0};
    for(char c: str2)f[c] = true;
    string ans = "";
    for(char c:str1)if(!f[c])ans+=c;
    return ans;
}

int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;
    int i=1;
    while(t) {
        string str1, str2;
        getline(cin, str1);
        getline(cin, str2);
        cout<<i<<". "<<removeCommonChar(str1, str2)<<"\n";
        t--;
        i++;
    }
    return 0;
}
