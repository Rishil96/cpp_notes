// Pointer to Derived Functions


#include <iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base;
        void display(){
            cout << "Base value of variable is: " << var_base << endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
    int var_derived;
    void display(){
        cout << "Base value of variable is: " << var_base << endl;
        cout << "Derived value of variable is: " << var_derived << endl;
    }
};


int main() {
    BaseClass *base_class_pointer;    // Since this pointer is declared as a base class pointer it will only allow usage of base class members.
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;  // Pointer of the base class can be made to point to the derived class. 
    // Even though we made a base class pointer to point to a derived class we can't access the members of the derived class as we declared the pointer using the BaseClass datatype.
    base_class_pointer -> var_base = 34;
    base_class_pointer -> display();  // Here the display of base class will be bound to this pointer which is called late binding. Because the pointer is a base class pointer, it will still use the display of base class even if it is pointing to a derived class object.

    // The pointer will bind itself to the member functions of the same base class that it was declared with even if it points to a derivation of the base class.

    // creating Derived class pointer and making it point to a derived class object. 
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer -> var_base = 45;
    derived_class_pointer -> var_derived = 54;

    derived_class_pointer -> display();  // Here the display of derived class will be bound to this pointer which is called late binding. Because the pointer is a derived class pointer and it is pointing to a derived class object.

    // Although it can be easily identified by us which member function will be called, the compiler decides this in the runtime. Hence, this is the runtime polymorphism.

    return 0;
}