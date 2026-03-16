/*
Write a C program to find whether the given number is an Armstrong number or not
using command line arguments.
An Armstrong number of three digits is an integer such that the sum of the cubes of
its digits is equal to the number itself. For example, 371 is an Armstrong number
since 3**3 + 7**3 + 1**3 = 371.

TEST CASES:
15
153
370
371
407
100
121
500
0
1
400
150
372
999
2
153


OUTPUT:
Yes
Yes
Yes
Yes
No
No
No
Yes
Yes
No
No
No
No
Yes
Yes

*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool isArmstrong(int num) {
    int sum = 0;
    int count = (num == 0) ? 1 : floor(log10(abs(num))) + 1;
    for(int i=num;i!=0;i/=10) {
        int digit = i%10;
        sum += pow(digit, count);
    }
    return sum == num;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t) {
        int num;
        cin>>num;
        cout<<(isArmstrong(num)?"Yes":"No")<<"\n";
        t--;
    }
    return 0;
}