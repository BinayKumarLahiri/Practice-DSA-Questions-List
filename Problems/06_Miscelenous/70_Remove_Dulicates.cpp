/*Remove Duplicates from a String Array
Problem: Given an array of strings, remove all duplicate strings and
return the updated array.
Test Case:
Input: arr = ["apple", "banana", "orange", "banana", "apple"]
Output: ["apple", "banana", "orange"]

TEST CASES:
11
5
apple banana orange banana apple
3
a a a
4
hello world hello world
1
lonely
6
cat dog bird cat dog fish
2
yes no
5
123 456 123 789 456
4
A a B b  
2
duplicate duplicate
5
cherry date cherry apple banana
6
true false true true false null

OUTPUT:
apple banana orange
a
hello world
lonely
cat dog bird fish
yes no
123 456 789
A a B b
duplicate
cherry date apple banana
true false null

*/

#include <bits/stdc++.h>
using namespace std;
void removeDulicate(vector<string> &words) {
    unordered_set<string> s;
    vector<string> temp;
    for(string word:words) {
        if(s.insert(word).second) temp.push_back(word);
    }
    words.clear();
    for(string word:temp)words.push_back(word);
}
int main() {
    int t;
    cin>> t;
    while(t) {
        int n;
        cin>>n;
        vector<string> words(n, "");
        for(int i=0;i<n;i++) cin>>words[i]; 
        removeDulicate(words);
        for(string str:words)cout<<str<<" ";
        cout<<"\n";
        t--;
    }
    return 0;
}