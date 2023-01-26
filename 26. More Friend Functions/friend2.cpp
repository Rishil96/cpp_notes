// More friend function examples
// Simple Example

#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    public:
        void setValue(int value) {
            data = value;
        }
    friend void add(X, Y);
};

class Y
{
    int data;
    public:
        void setValue(int value) {
            data = value;
        }
    friend void add(X, Y);
};

// Friend function of multiple classes
void add(X o1, Y o2) {
    cout << "Sum of data of X and Y class objects are: " << o1.data + o2.data << endl;
}

int main() {
    
    X a1;
    Y b1;

    a1.setValue(5);
    b1.setValue(10);

    add(a1, b1);

    return 0;
}
