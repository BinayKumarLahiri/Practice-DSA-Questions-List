/*
TCS Ninja Coding question 11:
Write a C program to convert the vowels to an uppercase in a given string using
command line arguments.
Example: if the input is tata, then the expected output is tAtA.

TEST CASES:
10
tata
programming
apple
aeiou
bcdfgh
TCS Ninja
Education
hello world
Sky
Banana


OUTPUT:
tAtA
prOgrAmmIng
ApplE
AEIOU
bcdfgh
TCS NInjA
EdUcAtIOn
hEllO wOrld
Sky
BAnAnA

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string convert(string str) {
    string ans = "";
    for(char c:str) {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') ans += (c-'a') + 'A';
        else ans += c;
    }
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;
    while(t) {
        string str;
        getline(cin, str);
        cout<<convert(str)<<"\n";
        t--;
    }
    return 0;
}