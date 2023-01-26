// Open and Close functions in FILE I/O


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out;
    out.open("sample.txt"); // Open file in write mode using the open member function.
    
    out << "This is my code!\n";
    out << "This is also my code!!\n";
    out << "This is my aalsi code!!!";
    out.close();

    // Read from sample
    ifstream in;
    string str1;

    in.open("sample.txt");

    // Using the while loop to read the whole file.
    // Using the .eof() function we can check the we have reached the End of the file
    // Every time we hit the getline function, it will read a line and move the pointer to the next line.
    // Then in next iteration, the next line will be read and so on.
    while(in.eof() == 0){
        getline(in, str1);
        cout << str1 << endl;
    }

    return 0;
}
