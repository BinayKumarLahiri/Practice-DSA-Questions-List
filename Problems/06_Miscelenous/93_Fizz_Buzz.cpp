/*Fizz Buzz
Problem: Print the numbers from 1 to n. But for multiples of three print
“Fizz” instead of the number and for the multiples of five print “Buzz”.
Test Case:
Input: n = 15
Output: ["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz",
"11", "Fizz", "13", "14", "FizzBuzz"]

TEST CASES:
15
1
3
5
15
2
10
0
30
16
7
4
12
8
20
9


OUTPUT:
["1"]
["1", "2", "Fizz"]
["1", "2", "Fizz", "4", "Buzz"]
["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz"]
["1", "2"]
["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz"]
[]
["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz", "16", "17", "Fizz", "19", "Buzz", "Fizz", "22", "23", "Fizz", "Buzz", "26", "Fizz", "28", "29", "FizzBuzz"]
["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz", "16"]
["1", "2", "Fizz", "4", "Buzz", "Fizz", "7"]
["1", "2", "Fizz", "4"]
["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz"]
["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8"]
["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz", "16", "17", "Fizz", "19", "Buzz"]
["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz"]

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
vector<string> fizzBuzz(int n) {
    vector<string> ans;
    for(int i=1;i<=n;i++) {
        if(i%3==0 && i%5==0) ans.push_back("FizzBuzz");
        else if(i%3==0)ans.push_back("Fizz");
        else if(i%5==0)ans.push_back("Buzz");
        else  {
            ans.push_back(to_string(i));
        }
    }
    return ans;
}
int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vector<string> ans = fizzBuzz(n);
        cout<<"[";
        if(ans.size()>0) {
            for(int i=0;i<ans.size()-1;i++) cout<<"\""<<ans[i]<<"\", ";
            cout<<"\""<<ans[ans.size()-1]<<"\"]\n";
        }else cout<<"]\n";
    }
    return 0;
}