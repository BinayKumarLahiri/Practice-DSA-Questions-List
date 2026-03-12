/*
Maximum Product Subarray in an Array
Problem Statement: Given an array that contains both negative and positive integers, find the maximum product subarray.

Examples:

Example 1:
Input:
 Nums = [1,2,3,4,5,0]
Output:
 120
Explanation:
 In the given array, we can see 1×2×3×4×5 gives maximum product value.


Example 2:
Input:
 Nums = [1,2,-3,0,-4,-5]
Output:
 20
Explanation:
 In the given array, we can see (-4)×(-5) gives maximum product value.


TEST CASES:
10
6
1 2 3 4 5 0
6
1 2 -3 0 -4 -5
1
-5
4
-2 0 -1 0
5
-2 3 -4 5 -1
3
-2 -3 -4
2
0 0
6
-1 -2 -3 -4 -5 -6
4
10 10 10 10
7
2 3 -2 4 -1 0 5

OUTPUT:
120
20
-5
0
120
12
0
720
10000
48


*/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
long long MaxSubArrayProduct1(vector<int> &arr) {
    /*
        Time Complexity: O(n^2)
        Space Complexity: O(1)
    */
    long long maxProduct = INT_MIN;
    for(int i=0;i<(int)arr.size();i++) {
        long long product = 1;
        for(int j=i;j<(int)arr.size();j++) {
            product *= arr[j];
        }
        maxProduct = max(maxProduct, product);
    }
    return maxProduct;
}   

long long MaxSubArrayProduct(vector<int> &arr) {
    /*
        Time Complexity: O(n)
        Space Complexity: O(1)
    */
    long long maxProd = arr[0];
    long long currMax = 1, currMin = 1;
    for(long long num:arr) {
        if(num == 0) {
            currMax = 1;
            currMin = 1;
            maxProd = max(maxProd, (long long)0);
            continue;
        }
        long long temp = currMax * num;
        currMax = max({(long long)num, temp, currMin * num});
        currMin = min({(long long)num, temp, currMin * num});
        maxProd = max(currMax, maxProd);
    }
    return maxProd;

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
        long long product = MaxSubArrayProduct(arr);
        cout << product << "\n";
        t--;
    }
    return 0;
}