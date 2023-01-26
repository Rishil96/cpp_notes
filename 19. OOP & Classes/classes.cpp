#include <iostream>
using namespace std;
// Creating classes

// Difference between Structures and classes
// Data is not protected in structures. All members can be directly accessed.
// Functions/methods cannot be written in a structure
// Use struct when we only need to hold data. Use class when data needs to be protected and/or functions are needed in it.


// Access Specifiers in C++. There are 3 types:-
// 1. Public : members are accessible outside the class.
// 2. Private : members cannot be viewed or accessed outside the class.
// 3. Protected : members cannot be accessed outside the class, but can be accessed from inherited class.


// Class employee
class Employee
{
    private:                // Private specifier: only functions inside the class can access
        int a, b, c;        // these variables
    public:                 // These variables can be accessed from anywhere in the program
        int d, e;
        void setData(int a1, int b1, int c1);  // Function declaration
        // Method/function inside the class 
        void getData() {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of d is " << d << endl;
            cout << "The value of e is " << e << endl;
        }
};

// Methods of a class can be written inside or outside the class like this
// To write a function/ method outside the class, it must be declared inside the class as done in this case on line 24.
// :: is the scope resolution operator : tells the compiler to which namespace or class the symbol/function belongs to.
void Employee :: setData (int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    
    Employee rishil;
    rishil.d = 96;
    rishil.e = 69;
    rishil.setData(1, 2, 3);
    rishil.getData();

    return 0;
}