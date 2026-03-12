/*Count Binary Substrings
Problem: Count the number of non-empty substrings that have the
same number of 0's and 1's.
Test Case:
Input: s = "00110011"
Output: 6*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int countMaxSeq(string str) {
    int count = 0;
    for(int i=0;i<str.length();i++) {
        int feq[] = {0,0};
        for(int j=i;j<str.size()-1;j+=2) {
            feq[str[j]-'0']++;
            feq[str[j+1]-'0']++;
            if(feq[0] == feq[1]) count++;
        }
    }
    return count;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        string str;
        cin>>str;
        cout<<countMaxSeq(str)<<"\n";
        t--;
    }
    return 0;
}