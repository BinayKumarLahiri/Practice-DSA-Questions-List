/*Minimum Page Turns in a Book
Problem: Given a book with n pages, and a page number p , find the
minimum number of pages to turn to reach page p .
Test Case:
Input: n = 6, p = 2
Output: 1

TEST CASES:
15
6 2
5 4
6 5
10 1
10 10
7 3
2 1
1 1
100 50
100 1
95 70
20 19
5 1
5 5
6 4


OUTPUT:
1
0
1
0
0
1
0
0
25
0
12
1
0
0
1
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
int minimumPageTurns(int totalPages, int pageNo) {
    int fromFront = pageNo/2;
    int fromBack = (totalPages%2==0)?(totalPages-pageNo+1)/2:(totalPages-pageNo)/2;
    return min(fromFront, fromBack);
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int totalPages, pageno;
        cin>>totalPages>>pageno;
        cout<<minimumPageTurns(totalPages, pageno)<<"\n";
    }
    return 0;
}