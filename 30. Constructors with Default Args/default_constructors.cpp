// Constructors with default arguments

// Just like in any function, we can give a default value to a parameter of the function.

#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

    public:
        Simple(int d1, int d2=0) {
            data1 = d1;
            data2 = d2;
        }
        void getData(void) {
            cout << "Data 1: " << data1 << endl;
            cout << "Data 2: " << data2 << endl;
        }
};

int main() {
    Simple s1(5, 5), s2(1);
    s1.getData();
    s2.getData();

    return 0;
}