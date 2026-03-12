/*
Capitalize first and last character of each word of a string
Problem Statement: Given a string, write a program to Capitalize the first and last character of each word of that string.

Examples:

Example 1:
Input: String str = "take u forward is awesome"
Output: “TakE U ForwarD IS AwesomE”
Explanation: We get the result after capitalizing the first and last character of each word of a string

Example 2:
Input: String str = "Take u Forward is Awesome"
Output: “TakE U ForwarD IS AwesomE”
Explanation: Characters T, F, A are initially in uppercase , so they remain as they are in the result.

TEST CASES:
15
take u forward is awesome
Take u Forward is Awesome
hello
a
a b c
  space  
multiple    spaces
123 numbers
!punctuation!
the quick brown fox
a apple a day
capitalized ALREADY
i love dsa
ended.
z

OUTPUT:
TakE U ForwarD IS AwesomE
TakE U ForwarD IS AwesomE
HellO
A
A B C
  SpacE  
MultiplE    SpaceS
123 NumberS
!PunctuatioN!
ThE QuicK BrowN FoX
A ApplE A DaY
CapitalizeD ALREADY
I LovE DsA
EndeD.
Z

*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool isChar(char c) {
    return (c>='a' && c<='z') || (c>='A' && c<='Z');
}
string capitalizeWords(string str) {
    string ans = "";
    int i=0;
    while(i<str.length()) {
        char c = str[i];
        if(isChar(c)) {
            string word = "";
            while(i<str.length() && isChar(str[i])) word += str[i++];
            if(word.length() > 0) {
                word[0] = (word[0]>='a' && word[0]<='z')?word[0]-'a'+'A':word[0];
                word[word.length()-1] = (word[word.length()-1]>='a' && word[word.length()-1]<='z')?word[word.length()-1]-'a'+'A':word[word.length()-1];
                ans += word;
            }
            i--;
        }else ans += c;
        i++;
    }
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
        cout<<capitalizeWords(c)<<"\n";
        t--;
    }
    return 0;
}
