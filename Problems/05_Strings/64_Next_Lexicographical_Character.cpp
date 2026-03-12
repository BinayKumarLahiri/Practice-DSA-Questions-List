/*
Change every letter with next lexicographic alphabet
Problem Statement: Given a string, write a program to change every letter in the given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a)

Examples:

Example 1:
Input: string str = “abcdxyz”
Output: bcdeyza
Explanation:

Example 2:
Input: string str = “Java”
Output: Kbwb
Explanation:


TEST CASES:
15
abcdxyz
Java
abcxyz
ABCXYZ
zZ
Hello World!
1239
   
a
Z
!@#$
Programming-2024
A B Z z
Keep.It.Simple.
mnopqrstuvwxyz

OUTPUT:
1. bcdeyza
2. Kbwb
3. bcdyza
4. BCDYZA
5. aA
6. Ifmmp Xpsme!
7. 1239
8.    
9. b
10. A
11. !@#$
12. Qsphsbnnjoh-2024
13. B C A a
14. Lffq.Ju.Tjnqmf.
15. nopqrstuvwxyza

*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

string changeLetter(string str) {
    string ans = "";
    for(char c:str) {
        if(c>='a' && c<='z') ans += 'a' + ((c-'a'+1)%26);
        else if(c>='A' && c<='Z') ans += 'A' + ((c-'A'+1)%26);
        else ans +=c;
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
        string str;
        getline(cin, str);
        cout<<i<<". "<<changeLetter(str)<<"\n";
        t--;
        i++;
    }
    return 0;
}
