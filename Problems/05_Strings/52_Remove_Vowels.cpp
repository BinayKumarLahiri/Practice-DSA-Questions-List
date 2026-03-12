/*
Remove all vowels from the String
Problem Statement: Given a String, write a program to remove vowels from a given String.

Examples:

Example 1:
Input: Str = “take u forward”
Output: tk  frwrd
Explanation: All vowels are removed from the given String.

Example 2:
Input: Str = “I am very happy today”
Output:  m vry happy tdy
Explanation: All vowels are removed from the given String.

TEST CASES:
15
take u forward
I am very happy today
aeiou
AEIOU
The quick brown fox
12345!@#
   
Hello World
Symphony
Rhythm
AaEeIiOoUu
bcdfgh
A man a plan a canal Panama
Queue
Everything is Awesome!

OUTPUT:
1. tk  frwrd
2.  m vry hppy tdy
3. 
4. 
5. Th qck brwn fx
6. 12345!@#
7.    
8. Hll Wrld
9. Smphny
10. Rhythm
11. 
12. bcdfgh
13.  mn  pln  cnl Pnm
14. Q
15. vrythng s wsm!


*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

string removeVowels(string s) {
    string ans = "";
    for(char c:s) {
        if(!(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')) ans += c;
    }
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;

    int i=1;
    while(t) {
        string c;
        getline(cin, c);
        cout<<i<<". "<<removeVowels(c)<<"\n";
        t--;
        i++;
    }
    return 0;
}
