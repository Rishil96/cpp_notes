// Friend Class
// Friend class is a class that can access all the private data of the class that it is friend of.
// So if Class A is a friend of Class B then, A can access all private members of B.

// Create a friend function in one class which uses the other class objects as the arguments.

#include <iostream>
using namespace std;

// The compiler reads from top to bottom so if a class type is used in another class the compiler won't find it since one class will be written below the other
// To fix this we need to do 2 things:-
// 1. Forward declaration: declare the other class before writing the logic of the class that uses this class type.
// 2. Declare the member function that will use the class type in the other class but define it after both classes are defined.

// Forward declaration
class Complex;

class Calculator
{
public:
    // Declare add real complex function to define it later on after complex class is created.
    int addRealComplex(Complex, Complex);
    int addCompComplex(Complex, Complex);

    int add(int a, int b)
    {
        return (a + b);
    }
};

class Complex
{
    int a, b;
    friend int Calculator ::addRealComplex(Complex o1, Complex o2);
    friend int Calculator ::addCompComplex(Complex o1, Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber(void)
    {
        cout << a << " + " << b << "i" << endl;
    }
};

// Creating this member function outside the class after complex class is defined.
int Calculator ::addRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::addCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    Complex c1, c2;
    c1.setNumber(2, 5);
    c1.printNumber();

    c2.setNumber(7, 2);
    c2.printNumber();

    Calculator calc;

    int realSum = calc.addRealComplex(c1, c2);
    int compSum = calc.addCompComplex(c1, c2);
    cout << "Real sum of complex numbers are " << realSum << endl;
    cout << "Complex sum of complex numbers are " << compSum << endl;
    return 0;
}