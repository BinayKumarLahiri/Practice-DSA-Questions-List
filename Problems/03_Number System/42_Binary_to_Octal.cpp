/*
Convert Binary to Octal
Problem Statement: Convert a binary number to an octal number

Examples:

Example 1:.
Input: N = 1100110
Output: 146
Explanation: 1100110 when converted to octal number is “146”.

Example 2:
Input: 11111
Output: 37
Explanation: 11111 when converted to octal number is “37”.

TEST CASE:
15
1100110
11111
0
1
1010
111
1000
111111
10101010
111111111
1000000000
11011
111000111
101101101
111111111111

OUTPUT:
146
37
0
1
12
7
10
77
252
777
1000
33
707
555
7777
*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string toOctal(string binary) {
    if(binary.length()%3 != 0) {
        int l = binary.length()%3;
        for(int i=0;i<3-l;i++) binary = "0" + binary;
    }
    string octal = "";
    for(int i=0;i<=binary.length()-3;i+=3) {
        int c = (binary[i+0]-'0')*4+(binary[i+1]-'0')*2+(binary[i+2]-'0')*1;
        octal += ('0'+c);
    }
    return octal;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        string binary;
        cin>>binary;
        cout << toOctal(binary) << "\n";
        t--;
    }
    return 0;
}
