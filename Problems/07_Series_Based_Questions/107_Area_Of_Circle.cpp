/*  TCS Ninja Coding question 2:
    Write a c program, to find the area of a circle when the diameter is given, using
    command line arguments. The input diameter is an integer and the output area
    should be a floating point variable with 2 point precision.
*/

#include <bits/stdc++.h>
#define PI 3.141
using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 2) {
        cerr<<"Radius Not Provided\n";
        return 1; 
    }
    int radius = atoi(argv[1]);
    double area = PI * (double)radius * (double)radius;
    cout<<"Area: "<<area<<"\n";
    return 0;
}