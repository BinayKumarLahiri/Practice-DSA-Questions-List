/*
Sort Elements of an Array by Frequency

Problem Statement: Given an array of integers, having some duplicate elements, sort the array by frequency.

Examples:

Example 1:
Input: N = 8, array[] = {1,2,3,2,4,3,1,2}
Output: 2 2 2 1 1 3 3 4 
Explanation: Since  2 is present 3 times in an array , so print it 3 times ,then print ‘1’ 2 times and then ‘3’ 2 times and 4 has least frequency, it will be printed at last.

Example 2:
Input: N = 6, array[] = {-199,6,7,-199,3,5}
Output: -199 -199 3 5 6 7
Explanation: Since -199 is present 2 times so it will be printed at first , then 3 , 5 ,6 ,7 are present once in array , so print them in their sorted order.

TEST CASES:
10
8
1 2 3 2 4 3 1 2
6
-199 6 7 -199 3 5
1
100
5
5 5 5 5 5
4
1 2 3 4
6
1 1 2 2 3 3
5
10 20 10 30 20
7
2 5 2 8 5 6 8
3
-1 0 -1
6
4 4 4 2 2 1

OUTPUT
2 2 2 1 1 3 3 4
-199 -199 3 5 6 7
100
5 5 5 5 5
1 2 3 4
1 1 2 2 3 3
10 10 20 20 30
2 2 5 5 8 8 6
-1 -1 0
4 4 4 2 2 1

*/ 

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
void sortByFreq(vector<int> &arr) {
    map<int, int> mp;
    for(int num:arr) mp[num]++;
    sort(arr.begin(), arr.end(), [mp](int a, int b) {
        if(mp.at(a) == mp.at(b)) return a<b;
        else return mp.at(a) > mp.at(b);
    });
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin >> arr[i];
        sortByFreq(arr);
        for(int num:arr) cout << num << " ";
        cout<<"\n";
        t--;
    }
    return 0;
}