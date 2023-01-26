// Call by value and Call by reference

// The variables inside the functions are destroyed after the function completes execution.


#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap the actual variables just the variables inside the function
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// To swap the actual variables we need to use pointer to target the address of the variables so the values can be changed at the memory address itself.
// This is called "Call by Reference" using pointers.
void swapPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// "Call by Reference" using C++ reference variables.
// This will just take variables and get the address of the variables in the function itself instead of providing it as an argument.
void swapReferenceVar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


// Return a reference from a function
// This function will return the address of the input variable and we can use this function to modify the variables as done on line 61
int & reference(int &a) {
    return a;
}

int main() {
    
    int a = 4, b = 5;

    cout << "The sum of a and b is " << sum(a, b) << endl;
    cout << "A and B before swap:-\n" << "A: " <<a <<"\nB: " << b;
    
    swap(a, b);
    // When variables are passed as parameters in a function a copy is sent to the function and not the actual variable. So any operation on the variable itself will not take place as the operation is done on a copy of the variable.
    cout << "\nA and B after swap:-\n" << "A: " <<a <<"\nB: " << b;

    swapPointer(&a, &b);
    cout << "\nA and B after swap pointer:-\n" << "A: " <<a <<"\nB: " << b;
    
    swapReferenceVar(a, b);
    cout << "\nA and B after swap pointer:-\n" << "A: " <<a <<"\nB: " << b;

    reference(a) = 766;
    cout << "\nA after using return reference to modify value: " << a;

    return 0;
}