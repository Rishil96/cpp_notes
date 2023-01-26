// Virtual Functions
// highly interrelated to the concepts of Polymorphism and Pointer to derived class.

// Virtual function enables us to call the derived class functions using a pointer which was declared using base class. This basically instructs the compiler at run time to run the derived class function.

#include <iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base = 1;
        // Using virtual keyword will tell the compiler to not use this function if a base class pointer is pointing to a derived class. It will tell the compiler to use the function from the derived class instead at run time.
        virtual void display(){
            cout << "1. The value of var base is " << var_base << endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived = 2;
        void display(){
            cout << "1. The value of var base is " << var_base << endl;
            cout << "2. The value of var derived is " << var_derived << endl;
        }
};

class DerivedClass2 : public DerivedClass
{
    public:
        int var_derived2 = 3;
        void display(){
            cout << "1. The value of var base is " << var_base << endl;
            cout << "2. The value of var derived is " << var_derived << endl;
            cout << "3. The value of var derived 2 is " << var_derived2 << endl;
        }
};


int main() {
    BaseClass *base_class_pointer;
    DerivedClass *derived_class_pointer;

    BaseClass obj_base;
    DerivedClass obj_derived;
    DerivedClass2 obj_derived2;

    base_class_pointer = &obj_derived;
    derived_class_pointer = &obj_derived2;

    base_class_pointer -> display();
    cout << endl;
    derived_class_pointer -> display();
    cout << endl;
    base_class_pointer = &obj_base;
    base_class_pointer -> display();

    return 0;
}