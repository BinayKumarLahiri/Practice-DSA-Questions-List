/*Next Greater Element I
Problem: Find the next greater element for each element in an array.
Test Case:
Input: nums1 = [4, 1, 2], nums2 = [1, 3, 4, 2]
Output: [-1, 3, -1]

TEST CASES:
12
3 4
4 1 2
1 3 4 2
2 4
2 4
1 2 3 4
3 3
1 3 5
5 3 1
4 4
1 2 3 4
4 3 2 1
1 1
10
10
2 5
1 5
2 3 5 1 0
3 6
6 2 5
6 5 4 3 2 1
3 5
2 4 1
1 2 3 4 5
3 3
0 1 2
2 1 0
2 4
4 2
1 2 3 4
4 6
1 3 5 2
6 5 4 3 2 1
5 8
2 4 6 8 10
10 8 6 4 2 1 3 5

OUTPUT:
-1 3 -1 
3 -1 
-1 -1 -1 
-1 -1 -1 -1 
-1 
-1 -1 
-1 -1 -1 
3 5 2 
-1 -1 -1 
-1 3 
-1 -1 -1 -1 
3 5 -1 -1 -1 

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

vector<int> nextGreater(vector<int> nums1, vector<int> nums2) {
    unordered_map<int, int> next_greater;
    stack<int> s;

    // Build the map using nums2
    for (int num : nums2) {
        while (!s.empty() && s.top() < num) {
            next_greater[s.top()] = num;
            s.pop();
        }
        s.push(num);
    }

    // Map remaining elements in stack to -1
    while (!s.empty()) {
        next_greater[s.top()] = -1;
        s.pop();
    }

    // Build result for nums1
    vector<int> res;
    for (int num : nums1) {
        res.push_back(next_greater[num]);
    }
    return res;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n1, n2;
        cin>>n1>>n2;
        vector<int> arr1(n1), arr2(n2);
        for(int i=0;i<n1;i++)cin>>arr1[i];
        for(int i=0;i<n2;i++)cin>>arr2[i];
        vector<int> ans = nextGreater(arr1, arr2);
        for(int num:ans)cout<<num<<" ";
        cout<<"\n";
        t--;
    }
    return 0;
}