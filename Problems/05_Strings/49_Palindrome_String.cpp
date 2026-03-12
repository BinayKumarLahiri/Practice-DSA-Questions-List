/*
Check if the given String is Palindrome or not
Problem Statement: “Given a string, check if the string is palindrome or not.”  A string is said to be palindrome if the reverse of the string is the same as the string.

Examples:

Example 1:
Input: Str =  “ABCDCBA”
Output: Palindrome
Explanation: String when reversed is the same as string.

Example 2:
Input: Str = “TAKE U FORWARD”
Output: Not Palindrome
Explanation: String when reversed is not the same as string.

TEST CASES:
20
ABCDCBA
TAKE U FORWARD
a
aa
ab
racecar
Racecar
12321
123456
!@#@!
!@#$@!
A man a plan a canal Panama
Noon
level
(Empty String)
 (Space Character)
Step on no pets
Malayalam
1000000001
abcdefghijkkjihgfedcba

OUTPUT:
Palindrome
Not Palindrome
Palindrome
Palindrome
Not Palindrome
Palindrome
Not Palindrome
Palindrome
Not Palindrome
Palindrome
Not Palindrome
Not Palindrome
Not Palindrome
Palindrome
Palindrome
Palindrome
Not Palindrome
Not Palindrome
Palindrome
Palindrome

*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool isPalindrome(string str) {
    if(str.length() < 2)return true;
    string temp = str;
    reverse(temp.begin(), temp.end());
    return temp == str;
}
int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;
    while(t) {
        string str;
        getline(cin, str);
        if(isPalindrome(str)) cout << "Palindrome\n";
        else cout << "Not Palindrome\n";
        t--;
    }
    return 0;
}
