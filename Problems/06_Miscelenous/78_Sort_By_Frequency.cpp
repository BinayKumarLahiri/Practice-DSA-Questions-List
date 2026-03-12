/*Sort Elements by Frequency
Problem: Sort the elements of an array by their frequency of
occurrence.
Test Case:
Input: arr = [2, 5, 2, 8, 5, 6, 8, 8]
Output: [8, 8, 8, 2, 2, 5, 5, 6]

TEST CASES:
12
8
2 5 2 8 5 6 8 8
5
1 1 2 2 3
6
4 4 4 2 2 2
4
10 20 30 40
5
5 4 3 2 1
1
42
5
1 2 1 2 1
7
0 0 1 1 1 2 2
6
-1 -1 0 0 -1 5
4
100 100 100 100
8
2 3 2 4 5 12 2 3
5
2 2 1 1 3

OUTPUT:
8 8 8 2 2 5 5 6
1 1 2 2 3
2 2 2 4 4 4
10 20 30 40
1 2 3 4 5
42
1 1 1 2 2
1 1 1 0 0 2 2
-1 -1 -1 0 0 5
100 100 100 100
2 2 2 3 3 4 5 12
1 1 2 2 3

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
void sortByFreq(vector<int> &arr) {
    unordered_map<int, int> mp;
    for(int num:arr) mp[num]++;
    sort(arr.begin(), arr.end(), [mp](int a, int b){
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
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        sortByFreq(arr);
        for(int i:arr)cout<<i<<" ";
        cout<<"\n";
        t--;
    }
    return 0;
}