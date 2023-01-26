// Multiple Inheritance

#include <iostream>
using namespace std;

// Multiple means more than one Base Class is used to derive a class.

class Base1 {
    protected:
        int base1Val;
    public:
        void setBase1Val(int a){
            base1Val = a;
        }
        void getBase1Val(){
            cout << "Base 1 Value is: " << base1Val << endl;
        }
};

class Base2 {
    protected:
        int base2Val;
    public:
        void setBase2Val(int a){
            base2Val = a;
        }
        void getBase2Val(){
            cout << "Base 2 Value is: " << base2Val << endl;
        }
};

class Base3 {
    protected:
        int base3Val;
    public:
        void setBase3Val(int a){
            base3Val = a;
        }
        void getBase3Val(){
            cout << "Base 3 Value is: " << base3Val << endl;
        }
};


class Derived : public Base1, public Base2, public Base3
{
    public:
        void show(void) {
            cout << "Base 1 value is: " << base1Val << endl;
            cout << "Base 2 value is: " << base2Val << endl;
            cout << "Base 3 value is: " << base3Val << endl;
            cout << "The sum is: " << base1Val + base2Val + base3Val << endl;
        }
};


int main() {
    Derived rishil;
    
    rishil.setBase1Val(77);
    rishil.setBase2Val(88);
    rishil.setBase3Val(99);
    rishil.show();

    return 0;
}