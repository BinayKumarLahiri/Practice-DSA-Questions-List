/*
Uncommon Words from Two Sentences
Problem: Find the uncommon words from two sentences.
Test Case:
Input: s1 = "this apple is sweet", s2 = "this apple is sour"
Output: ["sweet", "sour"]

TEST CASES:
12
this apple is sweet
this apple is sour
apple apple
banana
hello world
hello
myself me
myself me
the quick brown fox
the lazy dog
apple banana
apple banana
a b c d
e f g h
sunkist orange
orange sunkist juice
coding is fun
coding is life
unique
unique
empty space
space
word word word
word


OUTPUT:
sour sweet
banana
world

brown dog fox lazy quick
 
a b c d e f g h
juice
fun life

empty


*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

vector<string> getUncommon(string str1, string str2) {
    unordered_map<string, int> mp;
    stringstream s1(str1), s2(str2);
    string word;
    while(s1 >> word) mp[word]++;
    while(s2 >> word) mp[word]++;
    vector<string> ans;
    for(auto const& [word, freq]:mp) {
        if(freq == 1) ans.push_back(word);
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;
    while(t) {
        string str1, str2;
        getline(cin, str1);
        getline(cin, str2);
        vector<string> uncommon = getUncommon(str1, str2);
        for(string word:uncommon) cout<<word<<" ";
        cout<<"\n";
        t--;
    }
    return 0;
}