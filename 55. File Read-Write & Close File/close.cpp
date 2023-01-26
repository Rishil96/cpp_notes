// Read and write in the same program and closing the file.


#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ofstream rout("sample1.txt");   // Connecting our file with rout stream
    
    // Create string variable and take the string as input from the user.
    string name;
    cout << "Enter your name: ";

    getline(cin, name); // Normal >> operator only reads 1 word so using getline on cin we can read full sentences as input from the user.
    
    rout << "My name is: " + name;

    /* Unless we close the file manually in code the file will remain open as long as the code is in      execution and cannot be used by any other process.
    To close a file in code use .close() function.
    */ 
    rout.close();   // This will allow us to open the file again in another mode e.g. read mode.

    // Open the file again in read mode
    ifstream rin("sample1.txt");
    string content;
    getline(rin, content);

    cout << "File Content\n" << content;

    rin.close();    // Always close the files that was opened for use.
    return 0;
}
