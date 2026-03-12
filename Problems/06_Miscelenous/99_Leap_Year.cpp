/*Check if a Given Year is a Leap Year
Problem: Determine whether a given year is a leap year or not.
Test Case:
Input: year = 2000
Output: True


TEST CASES:
15
2000
1900
2024
2023
4
100
400
1600
1700
1800
2100
2400
2012
2014
2004


OUTPUT;
True
False
True
False
True
False
True
True
False
False
False
True
True
False
True
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
bool isleapYear(int n) {
    return (n%100==0 && n%400==0) || (n%100!=0 && n%4==0);
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        if(isleapYear(n)) cout<<"True\n";
        else cout<<"False\n";
    }
    return 0;
}