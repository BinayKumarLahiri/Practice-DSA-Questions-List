/*Pascal's Triangle
Problem: Generate the first few rows of Pascal's Triangle.
Test Case:
Input: numRows = 5
Output: [[1], [1,1], [1,2,1], [1,3,3,1], [1,4,6,4,1]]

TEST CASES:
10
5
1
2
3
4
6
0
10
7
8

OUTPUT:
[[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1],]
[[1],]
[[1],[1,1],]
[[1],[1,1],[1,2,1],]
[[1],[1,1],[1,2,1],[1,3,3,1],]
[[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1],[1,5,10,10,5,1],]
[[1],]
[[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1],[1,5,10,10,5,1],[1,6,15,20,15,6,1],[1,7,21,35,35,21,7,1],[1,8,28,56,70,56,28,8,1],[1,9,36,84,126,126,84,36,9,1],]
[[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1],[1,5,10,10,5,1],[1,6,15,20,15,6,1],]
[[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1],[1,5,10,10,5,1],[1,6,15,20,15,6,1],[1,7,21,35,35,21,7,1],]

*/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    ans.push_back({1});
    for(int i=1;i<numRows;i++) {
        vector<int> row;
        row.push_back(1);
        for(int j=1;j<ans[i-1].size();j++) {
            row.push_back(ans[i-1][j-1]+ans[i-1][j]);
        }
        row.push_back(1);
        ans.push_back(row);
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t) {
        int n;
        cin >> n;
        vector<vector<int>> rows = generate(n);
        cout<<"[";
        for(vector<int> row:rows) {
            cout<<"[";
            for(int i=0;i<row.size()-1;i++)cout<<row[i]<<",";
            cout<<row[row.size()-1]<<"],";
        }
        cout<<"]\n";
        t--;
    }
    return 0;
}