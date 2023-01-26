// Friend Functions
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

    public:
        // Here the function created outside the class is added as a friend to allow the usage of private data members of the objects used in the function.
        friend Complex sumComplex(Complex o1, Complex o2);

        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout << "Your complex number is: " << a << " + " << b << "i" << endl;
        }
};

// This function tries to use private data from the Complex class. a and b are private data members of the Complex class which cannot be used outside the function unless the function using private data is declared as a friend inside the class.
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main() {
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(4, 1);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend functions:-
1. Friend functions are not in the scope of the class.
2. Since friend functions are not a part of the class, it cannot be called by any objects of the class.
3. Can be invoked without the help of any objects.
4. Usually contains the objects of the class as arguments.
5. Can be declared in the public or private section of the class, it doesn't matter.
6. It cannot access the members of the class directly, requires objects to do so.
*/ 