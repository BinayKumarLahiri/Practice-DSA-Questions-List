/*
Find Common Characters
Problem: Find the common characters in multiple strings.
Test Case:
Input: words = ["bella", "label", "roller"]
Output: ["e", "l", "l"]

TEST CASES:
12
3
bella label roller
3
cool lock cook
2
apple pale
3
abc abc abc
3
abc def ghi
2
hello world
1
single
4
racecar car racer race
3
aaaa aaaa aaaa
2
aabbcc aacc
3
xyz yzx zxy
4
apple banana cherry date


OUTPUT:
e l l
c o
a e l p
a b c

l o
e g i l n s
a c r
a a a a
a a c c
x y z

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
vector<char> findCommonCharacters(vector<string> &words) {
    int gfeq[26] = {0};
    for(char c:words[0]) gfeq[c-'a']++;
    for(int i=1;i<words.size();i++) {
        int lfeq[26] = {0};
        for(char c:words[i])lfeq[c-'a']++;
        for(int i=0;i<26;i++) gfeq[i] = min(gfeq[i], lfeq[i]);
    }
    vector<char> commons;
    for(int i=0;i<26;i++) {
        for(int j=0;j<gfeq[i];j++)commons.push_back(i+'a');
    }
    return commons;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<char> commons = findCommonCharacters(arr);
        for(char c:commons)cout<<c<<" ";
        cout<<"\n";
        t--;
    }
    return 0;
}