/*
Count the number of words in a given string
Problem Statement: Write a program to count the number of words in a given string.

Examples:
INPUT: "HELLOW"
OUTPUT: 1

INPUT: "I am iron man"
OUTPUT: 4

TEST CASES:
15
HELLOW
I am iron man
   
a
a b c
  space  
multiple    spaces
! @ # $
123 456
The quick brown fox jumps over the lazy dog.
     leading
trailing     
   middle   
.
A Man A Plan A Canal Panama

OUTPUT:
1
4
0
1
3
1
2
4
2
9
1
1
1
1
7

*/ 
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int countWord(string str) {
    int count = 0;
    int flag = true;
    for(char c:str) {
        if(c == ' ' && !flag) {
            flag = true;
        }else if(c!=' ' && flag) {
            count++;
            flag = false;
        }
    }
    return count;
}

int main() {
    fastio;
    int t;
    cin >> t;
    cin >> ws;
    int i=1;
    while(t) {
        string str;
        getline(cin, str);
        // cout<<i<<". "<<sortLetter(str)<<"\n";
        cout<<countWord(str)<<"\n";
        t--;
        i++;
    }
    return 0;
}
