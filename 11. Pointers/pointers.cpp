#include <iostream>
using namespace std;

int main() {
    // Pointers : is a datatype that holds the address of other datatypes
    // Variables are stored in the computer RAM

    // Put an & before a variable to get its address
    // Put a * before a pointer to get the value stored at the address the pointer holds.
    int a = 3;
    int* b = &a;
    
    cout << "\nPointers in C++" << endl;

    // & : (Address of) operator
    // When the programs are run, the variables are assigned a memory location in the RAM and &variable gives us the address of the variable in memory.

    cout << "The address of a (&a) is: " << &a << endl;
    cout << "The address of a (pointer b) is: " << b << endl;
    cout << "The data type of b is: " << typeid(b).name() << endl;
    
    // * : Dereference operator
    // * : (Value at) operator
    // used to get the value stored at the address that the pointer variable holds.
    cout << "The value at address b is: " << *b << endl;
    
    // Pointer to pointer
    // A pointer that stores the address of another pointer
    int** c = &b;
    cout << "Address of pointer b is: " << &b << endl;
    cout << "Pointer-to-pointer c holds the address of pointer b. Its value is: " << c << endl;
    cout << "The value at address c is: " << *c << endl;
    cout << "The value at(value at(c)) is: " << **c << endl;
    cout << "Multiple * can be used to navigate through addresses till it reaches a value";

    return 0;
}