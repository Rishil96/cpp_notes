// Functions and Function prototypes

#include <iostream>
using namespace std;

// Function to add 2 numbers
int sum(int a, int b) {
    int c = a + b;
    return c;
}

// Function prototypes
// Function prototypes basically tells the compiler to look for the function before running so that if it is written after the main function it can still be used.
// A function prototype is a declaration in C and C++ of a function, its name, parameters and return type before its actual declaration. This enables the compiler to perform more robust type checking.

int subtract(int a, int b);
void greet();

int main() {
    int num1, num2;

    greet();

    cout << "\nEnter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "The sum is: " << sum(num1, num2) << endl;
    cout << "The difference is: " << subtract(num1, num2) <<endl;

    return 0;  // Means successful execution
}

// 2 types of parameters are formal parameters and actual parameters
// Formal parameters : used in the function as place holder variables like a, b in the function below
// Actual parameters : actual variables with values that are passed in the function.

int subtract(int a, int b) {
    int c = a - b;
    return c;
}

// Void functions : void is used when we don't want to return values
void greet() {
    cout << "Hey, there!";
}