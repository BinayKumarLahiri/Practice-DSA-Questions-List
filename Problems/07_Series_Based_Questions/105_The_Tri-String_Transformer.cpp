/*TCS Coding Questions – 3
Consider the given input and output:
Input: Get 3 strings in 3 lines as input
Hello
Hi
Good Morning
Output:
In the 1st string, replace the vowels with ‘$’, in the 2nd string replace the consonants
with ‘#’ and for the 3rd string replace the upper case into lower and lower case into
upper. And print these converted string in a single line as output.
H $ll$ #i gOOD mORNING

TEST CASES:
10
Apple
Orange
Banana
TCS
Coding
Question
Sky
Fly
High
aEiOu
bCdFg
MiXeD cAsE
A
b
c d E
123
456
789
Hello
Hi
Good Morning
Python
Java
Programming
aeiou
bcdfgh
UPPER lower
!@#
$%^
&*()

OUTPUT:
$ppl$ O#a##e bANANA
TCS #o#i## qUESTION
Sky ### hIGH
$$$$$ ##### mIxEd CaSe
$ # C D e
123 ### 789
H$ll$ #i gOOD mORNING
Pyth$n #a#a pROGRAMMING
$$$$$ ###### upper LOWER
!@# ### &*()

*/

#include <bits/stdc++.h>
using namespace std;
string transform(string str1, string str2, string str3) {
    string ans = "";
    for(char c:str1) {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') ans += '$';
        else ans += c;
    }
    ans+=' ';
    for(char c:str2) {
        if(!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')) ans += '#';
        else ans += c;
    }
    ans+=' ';
    for(char c:str3) {
        if(c>='a' && c<='z') ans += (c-'a')+'A';
        else if(c>='A' && c<='Z') ans += (c-'A')+'a';
        else ans+=c;
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    cin>>ws;
    while(t--) {
        string str1, str2, str3;
        getline(cin, str1);
        getline(cin, str2);
        getline(cin, str3);
        cout<<transform(str1, str2, str3)<<"\n";
    }
    return 0;
}