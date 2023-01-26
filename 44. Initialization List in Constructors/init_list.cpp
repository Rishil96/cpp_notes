// Initialization List in Constructors.

// helps us to initialize variables inside the constructor before the constructor body using :

#include <iostream>
using namespace std;

// Syntax for Initialization section
class Test
{
    int a, b, c;
    public:
        // It is also possible to use a in the initialization section of b as a was initialized just before b.
        
        // If we write initialization section for b and try to use b in the initialization section of a, then it will use a garbage value as in private section we have declared a before b so a will be initialized before b every time.

        // It is just another way of initializing data members just as we can do it inside the constructor body. (Consider it as a cool way to initializing data member).

        // Better used when the constructor body is complex to reduce the initialization lines from the body and initialize it before the start of the constructor body.

        Test(int i, int j) : a(i), b(j), c(i+j){
            cout << "Constructor invoked." << endl;
            cout << "Value of a is: " << a << endl;
            cout << "Value of b is: " << b << endl;
            cout << "Value of c is: " << c << endl;
        }
};

int main() {
    Test t(4, 6);
    return 0;
}