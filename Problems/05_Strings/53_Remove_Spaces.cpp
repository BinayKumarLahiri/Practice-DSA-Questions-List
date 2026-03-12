/*
Remove Spaces from a String
Problem Statement: Given a string, write a program to remove all the whitespaces from the string.

Examples:

Example 1:
Input: str = “Take you forward” 
Output: Takeyouforward
Explanation: After removing all the whitespaces Takeyouforward is the result

Example 2:
Input: str = “How are you doing”
Output: Howareyoudoing
Explanation: After removing all the whitespaces Howareyoudoing is the result


TEST CASES:
15
Take you forward
How are you doing
   
a b c d e
HelloWorld
  Leading and trailing  
1 2 3 4 5
! @ # $ %
	
Multiple    Spaces
A
a b
Space At End 
Space At Start
VeryLongStringWithNoSpaces

OUTPUT:
Takeyouforward
Howareyoudoing

abcde
HelloWorld
Leadingandtrailing
12345
!@#$%

MultipleSpaces
A
ab
SpaceAtEnd
SpaceAtStart
VeryLongStringWithNoSpaces

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
string removeSpace(string s) {
    string ans = "";
    for(char c:s)if(c!=' ')ans += c;
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
        cout<<removeSpace(c)<<"\n";
        t--;
        i++;
    }
    return 0;
}
