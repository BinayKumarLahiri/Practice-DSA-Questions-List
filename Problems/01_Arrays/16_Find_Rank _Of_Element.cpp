/*
Replace elements by its rank in the array
Replace elements by its rank in the array

Problem Statement: Given an array of N integers, the task is to replace each element of the array by its rank in the array.

Examples:

Example 1:
Input: 20 15 26 2 98 6
Output: 4 3 5 1 6 2
Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so…

Example 2:
Input: 1 5 8 15 8 25 9
Output: 1 2 3 5 3 6 4
Explanation: When sorted,the array is 1,5,8,8,9,15,25. So the rank of 1 is 1,rank of 5 is 2,rank of 8 is 3 and so…

TEST CASES:
10
6
20 15 26 2 98 6
7
1 5 8 15 8 25 9
1
100
5
10 10 10 10 10
4
-1 -5 0 10
3
1 2 3
3
3 2 1
6
100 2 100 2 50 50
2
-10 -20
8
5 4 3 2 1 2 3 4

OUTPUT:
4 3 5 1 6 2
1 2 3 5 3 6 4
1
1 1 1 1 1
2 1 3 4
1 2 3
3 2 1
3 1 3 1 2 2
2 1
5 4 3 2 1 2 3 4

*/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int binarySearch(vector<int> &arr, int target) {
    int i=0, j=(int)arr.size()-1;
    while(i<=j) {
        int mid = i+(j-i)/2;
        if(arr[mid] >= target) j = mid-1;
        else i = mid+1;
    }
    return i+1;
}
void generateRank(vector<int> &arr) {
    set<int> s(arr.begin(), arr.end());
    vector<int> temp(s.begin(), s.end());
    sort(temp.begin(), temp.end());
    for(int i=0;i<(int)arr.size();i++) {
        arr[i] = binarySearch(temp, arr[i]);
    }
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin >> arr[i];
        generateRank(arr);
        for(int num:arr) cout << num << " ";
        cout<<"\n";
        t--;
    }
    return 0;
}