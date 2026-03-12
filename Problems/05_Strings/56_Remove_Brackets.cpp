/*
Remove brackets from an algebraic expression
In this article, we will solve the most asked interview question: “Remove brackets from an algebraic expression”

Problem Statement: 

Remove brackets from an algebraic expression

Write a program to remove brackets from an algebraic expression

Given an algebraic expression, we need to simplify the expression and remove the brackets.

Examples:

Example 1:
Input: “a+((b-c)+d)”
Output: “a+b-c+d”
Explanation: Removed all the brackets in the algebric expression.

Example 2:
Input: “(((a-b))+c)”
Output: “a-b+c”
Explanation: Removed all the brackets in the algebric expression.

TEST CASES:
15
a+((b-c)+d)
(((a-b))+c)
(a+b)
a-(b+c)
a+[b-{c+d}]
()
(a)
a+b
((a+b)-(c+d))
x*[y+z]
{[(a)]}
a+b+(c-d)+e
(a+b))/c
(a+b*(c/d))
(a+b)-(c*d)

OUTPUT:
a+b-c+d
a-b+c
a+b
a-b+c
a+b-c+d

a
a+b
a+b-c+d
x*y+z
a
a+b+c-d+e
a+b/c
a+b*c/d
a+b-c*d

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string removeBrackets(string str) {
    string ans = "";
    for(char c:str) if(!(c=='(' || c==')' || c=='{' || c=='}' || c=='[' || c==']'))ans += c;
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
        cout<<removeBrackets(c)<<"\n";
        t--;
    }
    return 0;
}
