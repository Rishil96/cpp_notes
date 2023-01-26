// Nesting

#include <iostream>
#include <string>
using namespace std;

// Nesting of member functions
class binary
{
    private:         // Only allowed to use inside the class/ by class functions
        string s;
        void chk_bin(void);
    public:
        void read(void);
        void display(void);
        void ones_complement(void);
};

void binary :: read(void) {
    cout << "Enter a binary number: " << endl;
    cin >> s;
};

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::display(void)
{
    chk_bin();
    cout << "Your binary number is: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

void binary::ones_complement(void)
{
    chk_bin();      // This is nesting of members. Here we don't need class or object names to call 
                    // the method as we are in the same class namespace
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0') {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1') {
            s.at(i) = '0';
        }
    }
    cout << "\nOne's complement of s is " << s << endl;
}

int main()
{
    // OOPs points to know
    // C : initially called : C with classes
    // Classes are extension of structures from C
    // Structures had limitations: a. Members are public b. Cannot put methods in it.
    // Classes can have methods and properties
    // Classes can make members as public and private

    // It is possible to declare objects along with class declaration
    /* class Employee{
         // class methods and properties
    } rishil, ashwin; */

    // By default, the members of a class are private. If we want any members to be public, then we must specify it using public keyword

    binary b;
    b.read();
    b.display();
    b.ones_complement();

    return 0;
}