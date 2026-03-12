/*Find the Difference
Problem: Find the difference between two strings where one string is
the original string with an extra character.

TEST CASES:
13
abcd abcde
ae aea
aaaaa aaaaaa
abcabcabca abcabcabcax
q qq
abc bacx
12345 123456
!! !!!
zxzx zxzxz
lightnin lightning
  
o_o o_o!
python pythons
apple appeal


OUTPUT:
e
a
a
x
q
x
6
!
z
g
!
s
a
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
char difference(string str1, string str2) {
    unordered_map<char, int> freq;
    for(char c:str1)freq[c]++;
    for(char c:str2)freq[c]--;
    for(auto const& [key, value]:freq) if(value < 0) return key;
    return '\0';
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        string str1, str2;
        cin>>str1>>str2;
        char diff = difference(str1, str2);
        cout<<diff<<"\n";
    }
    return 0;
}