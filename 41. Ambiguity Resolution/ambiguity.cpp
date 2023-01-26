// Ambiguity Resolution

// It means when a derived class has multiple base classes and more than one base class has functions with the same name then which one will the derived class use. This needs to be resolved. 

// If we write a function with same name in the derived class which is present in the Base Class, the ambiguity will be resolved by overwriting the base class function by the Derived Class.

#include <iostream>
using namespace std;

class Base1
{
    public:
        void greet(){
            cout << "How are you?" << endl;
        }
};

class Base2
{
    public:
        void greet(){
            cout << "Hello World!" << endl;
        }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
        // Function to resolve ambiguity using Scope Resolution operator.
        void greet(){
            Base1 :: greet();
        }
};

int main() {
    Base1 b1;
    Base2 b2;
    Derived d1;

    b1.greet();
    b2.greet();
    d1.greet();

    return 0;
}