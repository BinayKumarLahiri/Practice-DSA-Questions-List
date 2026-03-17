/*
Q8. Reverse Words in a Sentence ■ VERIFIED PYQ [Easy]
Problem Given a sentence, reverse each word individually while keeping the word order intact. Example: "Hello World" becomes "olleH dlroW"
Sample Input
Hello World TCS
Sample Output
olleH dlroW SCT

TEST CASES:
12
Hello World TCS
a
OpenAI is great
  Leading and trailing  
Double  spaces
123 456 789
Racecar level
!Hello, World?
AbCdEfG
This is a very long sentence to test the limit of your buffer
   
A B C D

OUTPUT:
olleH dlroW SCT
a
IAnepO si taerg
  gnidaeL dna gniliart  
elbuoD  secaps
321 654 987
racecaR level
,olleH! ?dlroW
GfEdCbA
sihT si a yrev gnol ecnetnes ot tset eht timil fo ruoy reffub
   
A B C D

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string reverseWords(string str) {
    string ans = "";
    string temp = "";
    for(char c:str) {
        if(c != ' ') temp += c;
        else {
            reverse(temp.begin(), temp.end());
            ans += temp;
            ans += c;
            temp = "";
        }
    }
    reverse(temp.begin(), temp.end());
    ans += temp;
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
        cout << reverseWords(str) << "\n";
        t--;
    }
    return 0;
}