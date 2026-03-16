/*
Write a C program to check whether the given number is Palindrome or not using
command line arguments.

TEST CASES:
15
121
123
7
44
100
101
12321
999
10
505
11
0
1234
88
1221


OUTPUT:
Yes
No
Yes
Yes
No
Yes
Yes
Yes
No
Yes
Yes
Yes
No
Yes
Yes
*/

#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int num) {
    string str = to_string(num);
    for(int i=0, j=str.length()-1;i<j;i++, j--) {
        if(str[i] != str[j]) return false;
    }
    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int num;
        cin>>num;
        cout<<(isPalindrome(num)?"Yes":"No")<<"\n";
    }
    return 0;
}