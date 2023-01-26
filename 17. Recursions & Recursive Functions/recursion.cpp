#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1){
        return 1;
    }
    return n * factorial(n - 1);
}

// Recursion is calling the function again and again inside the same function till a certain condition is met. Kind of like a while loop but can provide more functionality.

// Working of recursion: Factorial eg from above
// First the function will be executed from top to bottom and then it will reach return where recursion takes place
// Suppose n = 4
// OP 1: 4 * factorial(3);          since this is a function call it will still not return
// OP 1: 4 * 3 * factorial(2);          since this is a function call it will still not return
// OP 1: 4 * 3 * 2 * factorial(1);          since this is a function call it will still not return
// OP 1: 4 * 3 * 2 * 1;             now the condition is fulfilled to stop recursion. 


// Fibonacci series
int fibonacci(int n) {
    if (n < 2){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // Recursion for factorial
    int num;
    cout << "Enter a number to search for its factorial: " << endl;
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    
    // Enter index for fibonacci
    int index;
    cout << "Enter index for fibonacci: " << endl;
    cin >> index;
    cout << "Fibonacci Sequence value at index " << index << " is " << fibonacci(index);

    return 0;
}