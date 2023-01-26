// Single Inheritance

// Base Class
#include <iostream>
using namespace std;

class Employee
{
    public:
        int id;
        float salary;
        Employee(int inpID){
            id = inpID;
            salary = 34;
        }

        Employee(){}  // Default constructor is required in inheritance.
};

// Derived Class
// Syntax: class Derived Class Name : visibility-mode Base Class Name
// visibility-mode can be public or private
// Default is Private

// Public Visibility mode: if we set visibility mode to public then public members from base class will be public members in the derived class. 

// Private Visibility mode: if we set visibility mode to private then public members from base class will be private members in the derived class. 

// Private members of the base class cannot be inherited to the derived class.

class Programmer : public Employee 
{
    public:
        int langCode = 9;
        Programmer(int inpID) {
            id = inpID;
        }
        void getID(){
            cout << id << endl;
        }
};


int main() {
    Employee ashwin(10), ramesh(11);
    Programmer rishil(100);

    cout << ashwin.id << endl;
    cout << ashwin.salary << endl;

    cout << ramesh.id << endl;
    cout << ramesh.salary << endl;
    
    rishil.getID();
    rishil.salary = 45;
    cout << rishil.salary << endl; // This is possible cause visibility mode was set to public.

    return 0;
}