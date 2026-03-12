/*
Remove Character
Problem: Remove characters from the first string that are present in the
second string.
Test Case:
Input: str1 = "abcdef", str2 = "acf"
Output: "bde"

TEST CASES:
12
abcdef acf
occurrence car
india nd
proactive pirate
apple peer
xyz abc
aaaaa a
matching ing
hello_world l_o
123456 246
SpecialCase Case
empty 

OUTPUT:
bde
ouene
iia
ocv
al
xyz

match
hewrd
135
Spcil
empty

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string removeCommon(string str1, string str2) {
    unordered_map<char, bool> mp;
    for(char c:str2) mp[c] = true;
    string str = "";
    for(char c:str1) if(!mp[c]) str += c;
    return str;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        string first, second;
        cin>>first>>second;
        cout<<removeCommon(first, second)<<"\n";
        t--;
    }
    return 0;
}