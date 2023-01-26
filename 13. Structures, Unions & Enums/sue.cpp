// Structures, Unions and Enum

#include <iostream>
using namespace std;

// In C++ single quotes are used for single character and double quotes for string literals

// Structure : used to combine items of different datatypes.
// Basically helps us create a user defined datatype with multiple variables with different datatypes


// To give an alias to the struct use typedef keyword before struct and give the alias at the end before ;
typedef struct employee
{
    int empID;
    char initials;
    float salary;
    bool isHappy;
} emp;

// Unions : are similar to structures but provide better memory management.
// We can use union when we want to have multiple options but will be using only one at a time.
union money {
    int rupees;
    float dollars;
    char crypto;
};
// In the above eg, at a time we will use only one type of currency so union will only alot the memory for one datatype with the maximum size.
// In this case int and float both are 4 bytes so for every union (money) created it will only alot 4 bytes of memory.

// In struct all the mentioned variables can be used, as the total of all the mentioned datatypes is alloted to a single struct. (In case of employee int = 4, float = 4, char and bool are 1 each so in total 10 bytes for each employee struct)
// In union only one of the mentioned variables can be used at a time as the datatype with the largest size is alloted to a single union. (In case of money union it will be 4bytes as int = 4 bytes is the largest)


int main() {
    
    // Create employee Rishil
    emp rishil;
    rishil.empID = 1;
    rishil.initials = 'R';
    rishil.salary = 23000;
    rishil.isHappy = true;

    // print employee details
    cout << "The employee details of Rishil are: " << endl;
    cout << "ID: " << rishil.empID << endl;
    cout << "Initial letter: " << rishil.initials << endl;
    cout << "Salary: " << rishil.salary << endl;
    cout << "Is Happy: " << rishil.isHappy << endl;

    // Create union money
    union money m1;
    m1.crypto = 'B';
    cout << m1.crypto << endl;

    m1.rupees = 1000;
    cout << m1.rupees << endl;

    // If we use one variable and try to use the other from a union a garbage value will be returned since the memory is shared only one variable that is used will have the correct answer.
    

    // Enum : kind of a list with every value being alloted an integer starting with 0
    // the created enum is also a data type which can be used to create variables as well and perform conditional operations
    enum Meal {Breakfast, Lunch, Dinner};
    cout << "Value of Breakfast: " << Breakfast << endl; 
    cout << "Value of Lunch: " << Lunch << endl; 
    cout << "Value of Dinner: " << Dinner << endl; 

    // Create a variable using enum
    Meal meal1 = Dinner;
    cout << "Meal 1: "  << meal1 << endl;

    return 0;
}