// Create a friend class which can use the private members of another class

#include <iostream>
using namespace std;

// Forward declaration
class Complex;

// Complex Calculator class
class ComplexCalculator
{
    public:
        int addReal(Complex, Complex);
        int addComp(Complex, Complex);
};

// Complex number class
class Complex
{
    int a, b;
    
    // Declare the entire calculator class as a friend class
    friend class ComplexCalculator;

    public:
        void setNumber(int n1, int n2) {
            a = n1;
            b = n2;
        }

        void printNumber() {
            cout << "Complex Number: " << a << " + " << b << "i" << endl;
        }
};

// Complex calculator member functions
int ComplexCalculator :: addReal(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int ComplexCalculator :: addComp(Complex o1, Complex o2) {
    return (o1.b + o2.b);
}

int main() {
    Complex c1, c2;

    c1.setNumber(5, 5);
    c1.printNumber();

    c2.setNumber(4, 2);
    c2.printNumber();
    
    ComplexCalculator calc;

    int sumReal = calc.addReal(c1, c2);
    int sumComp = calc.addComp(c1, c2);

    cout << "Real Sum of c1 and c2: " << sumReal << endl;
    cout << "Complex Sum of c1 and c2: " << sumComp << endl;
    return 0;
}