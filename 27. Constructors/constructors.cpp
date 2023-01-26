// Constructors in C++

#include <iostream>
using namespace std;

/* 
 - Constructors are a special member functions with the same name as the class.
 - used to initialize the objects of its class. meaning run some pre-determined code when an object of a 
   class is created.
 - It is not needed to specify a return type for constructor functions like we do in other functions.
 - There are 2 types of constructors: 1. Default (does not take any arguments/parameters)
                                      2. Parameterized (takes parameters to initialize)
 */ 

class Complex
{
    int a, b;
    public: 
        Complex(void);

        void printNumber(void){
            cout << "Complex number is: " << a << " + " << b << "i" << endl; 
        }
};

Complex :: Complex(void) {
    a = 10;
    b = 7;
}


int main() {
    
    Complex o1;
    o1.printNumber();

    return 0;
}

// Properties/Characteristics of a Constructor
/*
1. Should be declared as a public member.
2. Constructor function is invoked automatically when an object in created for a class.
3. Cannot return any values and don't have any return types.
4. Can have default arguments.
5. We cannot refer to their address.
*/

