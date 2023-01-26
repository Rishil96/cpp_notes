// Array of objects
#include <iostream>
using namespace std;


class Employee
{
    int id;
    int salary;

    public: 
        void setId(void) {
            salary = 122;
            cout << "Enter the ID for the employee: " << endl;
            cin >> id;
        }

        void getId(void) {
            cout << "The ID number of this employee is " << id << endl;
        }
};

int main() {
    
    // Create an array of employees
    // This array consists elements of type Employee
    // Classes are basically customized datatypes
    Employee google[4];

    for (int i = 0; i < 4; i++)
    {
        google[i].setId();
        google[i].getId();
    }
    

    return 0;
}