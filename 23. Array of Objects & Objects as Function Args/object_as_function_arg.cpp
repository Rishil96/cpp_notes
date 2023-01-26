#include <iostream>
using namespace std;

class Complex
{
    // It is not a good programming practice keep keep data members/variables as public
    int a;
    int b;

    public:
        void setData(int num1, int num2) {
            a = num1;
            b = num2;
        }

        // This member function is using the Class object as arguments
        void setDataBySum(Complex o1, Complex o2) {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(void) {
            cout << "Your complex number is: " << a << "+" << b << "i" << endl;
        }

};

int main() {
    
    Complex c1, c2, c3;

    c1.setData(1, 2);
    c1.printNumber();
    
    c2.setData(3, 4);
    c2.printNumber();
    
    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}