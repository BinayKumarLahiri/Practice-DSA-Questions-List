/*
Q4. COVID Handshake Problem ■ VERIFIED PYQ [Easy]
Problem Before the outbreak of coronavirus, a meeting took place in Wuhan. A person who attended had COVID-19 and everyone shook hands
with everyone else exactly once. Given N people in the room, find the total number of handshakes. Input: First line = T (test cases). 
Each following line = N (number of people).
Constraints 1<=T<=1000, 0<N<10**6
Sample Input
2
1
2
Sample Output
0
1
Explanation 
1 person → 0 handshakes. 
2 people → 1 handshake. Formula: N*(N-1)/2

TEST CASES:
15
1
2
3
4
5
6
7
8
9
10
20
50
100
1000
999999

OUTPUT:
0
1
3
6
10
15
21
28
36
45
190
1225
4950
499500
499998500001

*/


#include <bits/stdc++.h>
using namespace std;
long long handshakes(int num) {
    return ((long long)num*(long long)(num-1))/2;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;
        cout<<handshakes(num)<<"\n";
    }
    return 0;
}