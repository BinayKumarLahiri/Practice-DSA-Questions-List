/*
Count number of vowels, consonants, spaces in String
Problem Statement: Given a string, write a program to count the number of vowels, consonants, and spaces in that string.

Examples:

Example 1:
Input: string str=”Take u forward is Awesome”
Output: 
Vowels: 10
Consonants: 11
White spaces: 4
Explanation: 

Example 2:
Input: string str=”India won the cricket match”
Output:
Vowels: 8
Consonants: 15
White spaces: 4

TEST CASES:12
Take u forward is Awesome
India won the cricket match
aeiou AEIOU
bcdfghjklmnpqrstvwxyz
    
1234567890
Hello World!
Quick brown fox jumps over the lazy dog
A
b
z
@#$%^&*

OUTPUT:
1. Vowels: 10, Consonants: 11, White spaces: 4
2. Vowels: 8, Consonants: 15, White spaces: 4
3. Vowels: 10, Consonants: 0, White spaces: 1
4. Vowels: 0, Consonants: 21, White spaces: 0
5. Vowels: 0, Consonants: 0, White spaces: 4
6. Vowels: 0, Consonants: 0, White spaces: 0
7. Vowels: 3, Consonants: 7, White spaces: 1
8. Vowels: 10, Consonants: 22, White spaces: 7
9. Vowels: 1, Consonants: 0, White spaces: 0
10. Vowels: 0, Consonants: 1, White spaces: 0
11. Vowels: 0, Consonants: 1, White spaces: 0
12. Vowels: 0, Consonants: 0, White spaces: 0

*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
vector<int> count(string str) {
    int v=0, co=0, s=0;
    for(char c:str) {
        if(c == ' ') s++;
        else if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U') v++;
        else if((c<='z' && c>='a') || (c<='Z' && c>='A')) co++;
    }
    return {v, co, s};
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
        vector<int> ans = count(str);
        cout << i << ". Vowels: "<<ans[0]<<", Consonants: "<<ans[1]<<", White spaces: "<<ans[2]<<"\n";
        t--;
        i++;
    }
    return 0;
}
