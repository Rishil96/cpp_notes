// Polymorphism
// Poly means many and morph means forms

/*
2 types of polymorphism are:

    1. Compile time polymorphism: object is bound to the function call at compile time. The compiler knows after compilation which function will be called. Also called as Early binding or Static binding.
        - Compile time polymorphism can be achieved in 2 ways:-
            a. Function Overloading
            b. Operator Overloading

    2. Run time polymorphism: the function that will be executed will only be known at run time. The compiler postpones this decision.
        - can be achieved by Virtual functions.
*/

#include <iostream>
using namespace std;

// Operator Overloading 
class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + " << imag << "i" << endl; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
}