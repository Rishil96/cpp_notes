// File Input Output

#include <iostream>
#include <fstream>  // Provides classes to work with File Input and Outputs.

/*
The useful classes for working with files in C++ are:-
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in C++ we have to open it. There are 2 ways to open a file:-
    1. Using a constructor.
    2. Using a member function open() of the class.
*/

using namespace std;

int main() {
    string st = "Rishil Bhai!";
    string st2;

    // Opening files using Constructor
    ofstream out("sample.txt"); // Write operation
    out << st;  // Writes the string variable contents to the file

    ifstream in("sample2.txt"); // Read operation
    for (int i = 0; i < 3; i++){
        getline(in, st2);   // Getline to read the whole line and store it in variable
        cout << st2 << endl;
    }
    
    

    return 0;
}