// Constructors in Derived Class

#include <iostream>
using namespace std;

// Create base class
class Base1
{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout << "Base1 constructor called." << endl;
        }
        void printData1(){
            cout << "Data1 value is: " << data1 << endl;
        }
};

// Create base 2 class
class Base2
{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout << "Base2 constructor called." << endl;
        }
        void printData2(){
            cout << "Data2 value is: " << data2 << endl;
        }
};

// Create Derived class
class Derived : public Base1, public Base2
{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout << "Derived Constructor called." << endl;
        }
        void printData(){
            cout << "Derived 1 value is: " << derived1 << endl;
            cout << "Derived 2 value is: " << derived2 << endl;
        }
};


int main() {
    Derived rishil(1, 2, 3, 4);
    rishil.printData1();
    rishil.printData2();
    rishil.printData();
    return 0;
}