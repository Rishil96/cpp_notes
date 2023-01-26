// Constructor Overloading

// It is possible to write multiple constructor functions with same name.
// Each constructor will have a different number of arguments passed.

#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
        
        Complex() {
            a = 0;
            b = 0;
        }

        Complex(int n1, int n2) {
            a = n1;
            b = n2;
        }
        
        Complex(int n1){
            a = n1;
            b = 0;
        }

        void printNumber(void) {
            cout << "Complex Number is: " << a << " + " << b << "i" << endl;
        }
};

int main() {

    Complex c1(5, 8);
    c1.printNumber();

    Complex c2(7);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}