/*Rotate a Matrix by 90 Degrees in Clockwise Direction
Problem: Given an n x n matrix, rotate the matrix by 90 degrees in the
clockwise direction. The rotation should be done in-place.
Test Case:
Input: matrix = [[1,2,3], [4,5,6], [7,8,9]]
Output: [[7,4,1], [8,5,2], [9,6,3]] 


TEST CASES:
12
3
1 2 3
4 5 6
7 8 9
2
1 2
3 4
1
5
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
2
10 20
30 40
3
0 0 1
0 1 0
1 0 0
3
1 1 1
2 2 2
3 3 3
2
-1 -2
-3 -4
3
1 2 1
2 3 2
1 2 1
4
5 1 9 11
2 4 8 10
13 3 6 7
15 14 12 16
2
0 5
-5 0
3
10 20 30
40 50 60
70 80 90


OUTPUT:
7 4 1 
8 5 2 
9 6 3 

3 1 
4 2 

5 

13 9 5 1 
14 10 6 2 
15 11 7 3 
16 12 8 4 

30 10 
40 20 

1 0 0 
0 1 0 
0 0 1 

3 2 1 
3 2 1 
3 2 1 

-3 -1 
-4 -2 

1 2 1 
2 3 2 
1 2 1 

15 13 2 5 
14 3 4 1 
12 6 8 9 
16 7 10 11 

-5 0 
0 5 

70 40 10 
80 50 20 
90 60 30 

*/

#include<bits/stdc++.h>
using namespace std;
void rotateMat(vector<vector<int>> &mat) {
    int n = mat.size();
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    for(int i=0;i<n;i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}
int main() {
    int t;
    cin>> t;
    while(t) {
        int n;
        cin>>n;
        vector<vector<int>> mat;
        for(int i=0;i<n;i++) {
            vector<int> row(n,0);
            for(int j=0;j<n;j++) {
                cin>>row[j];
            }
            mat.push_back(row);
        }
        rotateMat(mat);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        t--;
    }
    return 0;
}