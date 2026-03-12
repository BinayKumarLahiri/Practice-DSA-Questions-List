/*
Print Fibonacci Series up to Nth term
Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

Examples:

Example 1:
Input: N = 5
Output: 0 1 1 2 3 5
Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

Example 2:
Input: 6
Output: 0 1 1 2 3 5 8
Explanation: 0 1 1 2 3 5 8 is the fibonacci series upto 6th term.(0 based indexing)
TEST CASES:
11
0
1
2
3
4
5
6
7
10
15
20

OUTPUT:
0
0 1
0 1 1
0 1 1 2
0 1 1 2 3
0 1 1 2 3 5
0 1 1 2 3 5 8
0 1 1 2 3 5 8 13
0 1 1 2 3 5 8 13 21 34 55
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765

*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
vector<int> fibbo(int n) {
    if(n == 0) return {0};
    if(n == 1) return {0,1};
    vector<int> ans;
    ans.push_back(0);
    ans.push_back(1);
    for(int i=2;i<=n;i++) {
        ans.push_back(ans[i-1] + ans[i-2]);
    }
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        vector<int> numbers = fibbo(n);
        for(int i=0;i<numbers.size()-1;i++) cout << numbers[i] << " ";
        cout << numbers[numbers.size()-1]<<"\n";
        t--;
    }
    return 0;
}