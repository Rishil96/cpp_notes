// Destructors in C++

// Destructors are used to destroy the objects to free up the memory that was taken up by the objects.
// Never takes an arguments and does not return anything.
// Destructor has the same name as of the class but it starts with '~'

#include <iostream>
using namespace std;

class Number
{
    static int counter;
    public:
        Number() {
            counter++;
            cout << "Object number " << counter << " was constructed!" << endl; 
        }
        ~Number() {
            cout << "Destructor is called for object " << counter << endl;
            counter--;
        }
};

int Number :: counter;

int main() {
    cout << "Enter Main function" << endl;
    Number a, b;
    {
        cout<< "Code block entry." << endl;
        Number c, d, e;
        cout<< "Code block exit." << endl;
    }
    Number f, g;
    cout << "End Main function" << endl;
    return 0;
}
