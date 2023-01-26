#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Constants in C++
    const int a = 42;
    cout<< "The value of a is: "<<a<<" and it cannot be changed as const is used"<<endl;

    
    // Manipulators: helps in formatting data display
    // setw belongs to the header file iomanip and it helps us decide how many spaces the output should take to print.
    int x = 1, y = 25, z = 1233;
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;
    cout<<"The value of z is: "<<z<<endl;
    
    cout<<"After using setw"<<endl;
    cout<<"The value of x is: "<<setw(4)<<x<<endl;
    cout<<"The value of y is: "<<setw(4)<<y<<endl;
    cout<<"The value of z is: "<<setw(4)<<z<<endl;

    
    // Operator precedence
    // https://en.cppreference.com/w/cpp/language/operator_precedence

    int num1 = 7, num2 = 8;
    int output = ((((num1*5)+num2)-45)+87);
    int output2 = num1*5+num2-45+87;
    cout<<output<<endl;
    cout<<output2<<endl;

    return 0;
}