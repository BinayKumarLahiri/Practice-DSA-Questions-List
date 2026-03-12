/*Common Subsequence in Two Strings
Problem: Count the common subsequences between two strings.
Test Case:
Input: str1 = "abc", str2 = "ac"
Output: 3
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int countSub(string& s1, string& s2, int i, int j, vector<vector<int>> &memo) {
    if (i < 0 || j < 0) return 0;
    if (memo[i][j] != -1) return memo[i][j];
    if (s1[i] == s2[j]) {
        return memo[i][j] = 1 + countSub(s1, s2, i - 1, j, memo) + countSub(s1, s2, i, j - 1, memo);
    } else {
        return memo[i][j] = countSub(s1, s2, i - 1, j, memo) + countSub(s1, s2, i, j - 1, memo) - countSub(s1, s2, i - 1, j - 1, memo);
    }
}
int countSubsequences(string str1, string str2) {
    vector<vector<int>> memo(1001, vector<int>(1001, -1));
    return countSub(str1, str2, str1.length()-1, str2.length()-1, memo);
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        string str1, str2;
        cin>>str1>>str2;
        cout<<countSubsequences(str1, str2)<<"\n";
        t--;
    }
    return 0;
}