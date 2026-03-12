/*
Check if a number is Palindrome or Not
Problem Statement:  Given a number check if it is a palindrome.

An integer is considered a palindrome when it reads the same backward as forward.

Examples:

Example 1:
Input: N = 123
Output: Not Palindrome Number
Explanation: 123 read backwards is 321.Since these are two different numbers 123 is not a palindrome.

Example 2:
Input: N =  121 
Output: Palindrome Number
Explanation: 121 read backwards as 121.Since these are two same numbers 121 is a palindrome.

TEST CASES:
15
123
121
0
-121
10
7
22
1331
12321
1000
12345654321
99999
2147483647
2147447412
123456789

OUTPUT:
Not Palindrome Number
Palindrome Number
Palindrome Number
Not Palindrome Number
Not Palindrome Number
Palindrome Number
Palindrome Number
Palindrome Number
Palindrome Number
Not Palindrome Number
Palindrome Number
Palindrome Number
Not Palindrome Number
Palindrome Number
Not Palindrome Number

*/


#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

bool isPalindrome1(long long num) {
    if(num < 0) return false;
    vector<int> digits;
    for(long long i=num;i!=0;i/=10) digits.push_back((int)i%10);
    int i=0,j=(int)digits.size()-1;
    while(i<j) if(digits[i++] != digits[j--]) return false;
    return true;
}

bool isPalindrome(long long num) {
    if(num < 0) return false;
    long long temp = num, reversed = 0;
    while(temp) {
        reversed = (reversed * 10) + (temp % 10);
        temp /= 10;
    }
    return reversed == num;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        long long num;
        cin >> num;
        if(isPalindrome(num)) cout << "Palindrome Number\n";
        else cout << "Not Palindrome Number\n";
        t--;
    }
    return 0;
}