// Protected Access Modifier

// the only difference between a private and protected access modifier is protected members can be inherited and private members cannot be inherited.

/*
    For a protected member: 
       Base                 | Public Derivation | Private Derived | Protected Derived |
    1. Private members         Not Inherited       Not Inherited     Not Inherited  
    2. Protected members       Protected           Private           Protected          
    3. Public members          Public              Private           Protected
*/

#include <iostream>
using namespace std;

class Base
{
    protected:
        int a;
    private:
        int b;
};

// Here in derived since visibility mode is private, protected members of base will be private in Derived.
class Derived : protected Base
{
    public:
        void getData(){
            cout << "Value of a: " << a << endl;
        }
};

int main() {
    Derived d;
    d.getData();
    return 0;
}
