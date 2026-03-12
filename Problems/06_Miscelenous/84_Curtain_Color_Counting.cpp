/*Furnishing Company Curtain Color Counting
Problem: Given a string of curtain colors represented by 'a' for aqua
and 'b' for black, and an integer L , find the number of aqua color
curtains in the box with the maximum number of aqua color curtains.
Test Case:
Input: str = "aabbaa", L = 3
Output: 3

TEST CASES:
16
aabbaa
3
aaaaaa
2
bbbbbb
3
ababab
2
a
1
b
1
aabbaa
1
aabbaa
6
abaabaa
3
aaabaaa
2
bbaaaabb
3
ab
2
baabaaab
4
aababbabaa
5
aaaaa
10
bbbaaa
2

OUTPUT:
2
2
0
1
1
0
1
4
2
2
3
1
3
3
5
2

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int maxAuqaCurtain(string str, int n) {
    if(n>str.length())n = str.length();
    int maxCount = 0;
    int count = 0;
    int i=0,j=0;
    for(int k=0;k<n;k++) {
        if(j<str.length() && str[j++] == 'a')count++;
    }
    maxCount = max(maxCount, count);
    while(j<str.length()) {
        if(str[i++] == 'a') count--;
        if(str[j++] == 'a') count++;

        maxCount = max(maxCount, count);
    }
    return maxCount;
}
int main() {
    fastio;
    int t;
    cin >> t;
    // cin >> ws;
    while(t--) {
        string str;
        int n;
        cin>>str>>n;
        // cin>>n;
        cout<<maxAuqaCurtain(str, n)<<"\n";
    }
    return 0;
}