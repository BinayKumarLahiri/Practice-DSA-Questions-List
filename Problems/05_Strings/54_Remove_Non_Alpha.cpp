/*
Remove characters from a string except alphabets
Problem Statement: Write a program to remove all characters from a string except alphabets in a given string.

Examples:

Example 1:
Input: string str = "take12% *&u ^$#forward"
Output: takeuforward
Explanation:
Characters 1,2,%,*,&,^,$,# along with whitespaces are 
removed but the order of remaining alphabets is preserved.

Example 2:
Input: String str = "1.Python & 2.Java"
Output: PythonJava
Explanation: 
Characters 1.&2. along with whitespaces are removed 
but the order of remaining alphabets is preserved.

TEST CASES:
15
take12% *&u ^$#forward
1.Python & 2.Java
Hello World!
12345
!@#$%^&*()
Coming-Home-2024
A1B2C3D4
      
Special_Chars_Test
C++ is Great
Upper & LOWER case
Mixed123Input!@#
-
a
The Quick Brown Fox.


OUTPUT:
takeuforward
PythonJava
HelloWorld


ComingHome
ABCD

SpecialCharsTest
CisGreat
UpperLOWERcase
MixedInput

a
TheQuickBrownFox

*/ 

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string removeNonAlpha(string str) {
    string ans = "";
    for(char c:str) if((c>='a' && c<='z') || (c>='A' && c<='Z')) ans += c;
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;

    int i=1;
    while(t) {
        string c;
        getline(cin, c);
        cout<<removeNonAlpha(c)<<"\n";
        t--;
        i++;
    }
    return 0;
}
