/* 
There are 2 types of header files:-
1. System Header Files: comes with the compiler.
2. User defined Header Files: written by the programmer. 
*/

/*
To use user defined header files use the syntax given below
#include "this.h"
this.h will be a file in the same directory
*/

/* 
To see all system defined CPP header files go to the following link:
https://en.cppreference.com/w/cpp/header
*/

#include <iostream>

using namespace std;

int main() {
    int a = 4, b = 5;
    cout<<"Operators in C++"<<endl; // Use endl to jump to a new line.

    cout<<"Arithmetic Operators in C++ are"<<endl;
    cout<<"A + B: "<<a + b<<endl;
    cout<<"A - B: "<<a - b<<endl;
    cout<<"A * B: "<<a * b<<endl;
    cout<<"A / B: "<<a / b<<endl;
    cout<<"A % B: "<<a % b<<endl;
    cout<<"A++: "<<a++<<endl;
    cout<<"A--: "<<a--<<endl;
    cout<<"++A: "<<++a<<endl;
    cout<<"--A: "<<--a<<endl;
    cout<<endl;

    cout<<"Assignment Operators in C++ are:-"<<endl; // Assigning a value to a variable
    int c = 7, d = 8;
    char e = 'R';
    cout<<endl;

    cout<<"Comparison Operators in C++ are:-"<<endl; // Comparison between 2 variables
    cout<<"A == B: "<<(a == b)<<endl;
    cout<<"A != B: "<<(a != b)<<endl;
    cout<<"A > B: "<<(a > b)<<endl;
    cout<<"A < B: "<<(a < b)<<endl;
    cout<<"A >= B: "<<(a >= b)<<endl;
    cout<<"A <= B: "<<(a <= b)<<endl;
    cout<<endl;

    cout<<"Logical Operators in C++ are:-"<<endl; // Comparison between 2 variables
    cout<<"Logical AND: "<<((a == b) && (a < b))<<endl;
    cout<<"Logical OR: "<<((a == b) || (a < b))<<endl;
    cout<<"Logical NOT: "<<(!(a > b))<<endl;
    cout<<endl;

    return 0;
}
