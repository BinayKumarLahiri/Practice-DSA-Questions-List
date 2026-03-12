/*
Reverse a String
Problem Statement: Reverse a String. Write a program that reverses a given string (in-place).

Examples:
INPUT: HELLO
OUTPUT: OLLEH

INPUT: I AM IRON MAN
OUTPUT: NAM NORI MA I


TEST CASES:
15
HELLO
I AM IRON MAN
A
AB
ABC
racecar
12345
!@#$%
   
Leading Space
Trailing Space 
   Multiple   Spaces   
Step on no pets
.
A Man A Plan A Canal Panama

OUTPUT:
OLLEH
NAM NORI MA I
A
BA
CBA
racecar
54321
%$#@!
   
ecapS gnidaeL
 ecapS gniliarT
   secapS   elpitluM   
step on no petS
.
amanaP lanaC A nalP A naM A

*/ 

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string reverse(string str) {
    string ans = "";
    for(int i=str.length()-1;i>=0;i--) ans += str[i];
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;

    while(t) {
        string c;
        getline(cin, c);
        cout<<reverse(c)<<"\n";
        t--;
    }
    return 0;
}
