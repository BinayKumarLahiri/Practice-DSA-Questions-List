/*
Find the ASCII value of a character
Problem Statement: Given a character, Find the ASCII value of the character.

Examples:

Example 1:
Input: c = ‘A’
Output: 65
Explanation: ASCII value of A is 65

Example 2:
Input: c = ‘e’
Output: 101
Explanation: ASCII value of e is 101

TEST CASE:
15
A
a
Z
z
0
9
 
!
@
~
$
\
{
|
~

OUTPUT:
65
97
90
122
48
57
32
33
64
126
36
92
123
124
126

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;
    while(t) {
        string c;
        getline(cin, c);
        cout<<(int)c[0]<<"\n";
        t--;
    }
    return 0;
}
