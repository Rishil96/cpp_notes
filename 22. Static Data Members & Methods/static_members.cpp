// Static Data Members

// By default a static variable is initialized as 0

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;   // To create a class variable, declare the variable inside the class
                        // using static keyword and associate the variable using scope resolution 
                        // outside the class as done in line 31. Using static will only declare the 
                        // variable once so it won't be reset for every new object.
                        // Here count is the property of the class as static is used.

    public:
        
        static void getCount(void); // A static function will only have access to class variables.
        
        void setData(void) {
            cout << "\nEnter the employee's ID: ";
            cin >> id;
            count++;
        }

        void getData(void) {
            cout << "\nThe ID of this employee is: " << id << endl;
        }
};

// Count is the static data member of the class Employee
int Employee :: count;   // Default value is 0

// Static member functions
void Employee :: getCount(void) {
    cout << "\nThe number of Employees in the class is " << count;
}

int main() {

    Employee rishil, ramesh, ajitha, ashwin;
    rishil.setData();
    rishil.getData();
    Employee::getCount();
    
    ramesh.setData();
    ramesh.getData();
    Employee::getCount();

    ajitha.setData();
    ajitha.getData();
    Employee::getCount();

    ashwin.setData();
    ashwin.getData();
    Employee::getCount();

    return 0;
}