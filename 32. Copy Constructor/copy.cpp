// Copy Constructor
// is a constructor which makes a copy of another existing object.
// C++ Compiler by default allocates a copy constructor for every created class. So we don't need to explicitly write a copy constructor unless we want to add some additional lines of code to it.
#include <iostream>
using namespace std;

class Number
{
    int a = 0;
    public:
        Number() {}
        
        Number(int num) {
            a = num;
        }
        // Copy Constructor
        Number(Number &obj) {
            cout << "Copy Constructor called." << endl;
            a = obj.a;
        }
        void display(void) {
            cout << "Number is: " << a << endl;
        }
};

int main() {
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy Constructor will be invoked
    z1.display();

    z2 = z;       // Copy Constructor will not be invoked because the object z2 was already constructed 
                  // before on line 27 using the default constructor with no values.
    z2.display();

    Number z3 = z; // Copy constructor will be invoked because the object is being created on the same  
                   // line as another object value is being passed so the copy constructor will recieve 
                   // the same class object.
    z3.display();

    return 0;
}