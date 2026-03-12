/*
Convert Characters of a String to Opposite Case
Problem: Convert each character in the string to its opposite case.
Test Case:
Input: str = "Hello"
Output: "hELLO"

TEST CASES:
15
Hello
wORLD
aBcDeFg
123!@#
   
AbCdEfGhIjKlMnOpQrStUvWxYz
Z
a
CodingNinjas
tcs nqt
CODEVITA
HeLlO wOrLd
-100Degrees
AAAAAbbbbb
!@#$%^&*()


OUTPUT:
hELLO
World
AbCdEfG
123!@#
   
aBcDeFgHiJkLmNoPqRsTuVwXyZ
z
A
cODINGnINJAS
TCS NQT
codevita
hElLo WoRlD
-100dEGREES
aaaaaBBBBB
!@#$%^&*()

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string reverseCase(string str) {
    string ans = "";
    for(char c:str) {
        if(c>='a' && c<='z') ans += 'A' + (c-'a');
        else if(c>='A' && c<='Z') ans += 'a' + (c-'A');
        else ans += c;
    }
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    cin >>ws;
    while(t) {
        string str;
        getline(cin, str);
        cout<<reverseCase(str)<<"\n";
        t--;
    }
    return 0;
}