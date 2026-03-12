/*Contains Duplicate
Problem: Check if there are any duplicates in an array.
Test Case:
Input: arr = [1, 2, 3, 1]
Output: True
TEST CASES:
15
4
1 2 3 1
4
1 2 3 4
6
1 1 1 3 3 4
1
100
2
5 5
2
5 6
5
0 0 0 0 0
5
-1 -2 -3 -1 -5
6
10 20 30 40 50 60
3
0 1 0
10
1 2 3 4 5 6 7 8 9 10
5
-10 10 -20 20 0
2
-2147483648 2147483647
2
-2147483648 -2147483648
4
1000000 2000000 1000000 3000000

OUTPUT:
True
False
True
False
True
False
True
True
False
True
False
False
False
True
True

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool containsDuplicate(vector<int> &arr) {
    unordered_set<int> s;
    for(int num:arr) if(s.insert(num).second == false) return true;
    return false;
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
        if(containsDuplicate(arr))cout<<"True\n";
        else cout<<"False\n";
        t--;
    }
    return 0;
}