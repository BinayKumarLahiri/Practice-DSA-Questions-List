/*
Check if two Strings are anagrams of each other
Problem Statement: Given two strings, check if two strings are anagrams of each other or not.

Examples:

Example 1:
Input: CAT, ACT
Output: true
Explanation: Since the count of every letter of both strings are equal.

Example 2:
Input: RULES, LESRT 
Output: false
Explanation: Since the count of U and T  is not equal in both strings.

TEST CASES:
15
CAT
ACT
RULES
LESRT
listen
silent
hello
world
anagram
nagaram
a
a
ab
ba
abc
def
Abc
abc
Dormitory
Dirty room
Slot machines
Cash lost in me
Debit card
Bad credit
123
321
   
   
a b c
abc

OUTPUT:
true
false
true
false
true
true
true
false
false
false
false
false
true
true
false

*/ 

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

bool isAnagram(string str1, string str2) {
    if(str1.length() != str2.length()) return false;
    vector<int> f(256,0);
    for(int i=0;i<str1.length();i++) {
        f[str1[i]]++;
        f[str2[i]]--;
    }
    for(int n:f)if(n != 0)return false; 
    return true;
}
int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;
    int i=1;
    while(t) {
        int freq[256] = {0};
        string str1, str2;
        getline(cin, str1);
        getline(cin, str2);
        cout<<(isAnagram(str1, str2)?"true":"false")<<"\n";
        t--;
        i++;
    }
    return 0;
}
