// Arrays and Pointers
// Array is a collection of items of similar types
// In computer memory it is just continuous blocks of memory.


#include <iostream>
using namespace std;

int main() {
    
    // Create an array
    // It is not necessary to specify the number of elements in []
    // Values of an array can be changed using the index similar to lists in Python
    int marks[] = {23, 34, 45, 56};
    cout << "Full Array: " << marks << endl;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int mathMarks[4];
    
    mathMarks[0] = 1;
    mathMarks[1] = 2;
    mathMarks[2] = 3;
    mathMarks[3] = 4;
    // mathMarks[4] = 5;
    
    // Changing array values based on index
    mathMarks[2] = 99;

    cout << "Maths Marks :" << endl;
    
    // Print array using for loop
    for (int i = 0; i < 4; i++) {
        cout << "The math marks at index " << i << " is " << mathMarks[i] << endl;
    }

    // Print array using while loop
    int counter = 0;
    cout << "Begin While loop!" << endl;
    while (counter < 4) {
        cout << "The marks at index " << counter << " is " << marks[counter] << endl;
        counter++;
    }
    
    // Print array using do while loop
    int wcounter = 0;
    cout << "Begin Do while loop!" << endl;

    do {
        cout << "The math marks at index " << wcounter << " is " << mathMarks[wcounter] << endl;
        wcounter++;
    } while (wcounter < 4); 


    // Arrays with Pointers
    // Pointer arithmetic formula : address_new = address_current + i * sizeof(datatype)
    // i is the number of indexes we want to move ahead or behind from the current pointer address (p).
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* p = numbers;   // A pointer is created here that stores the starting address of the array 
                        // (first element) is at the starting address.    

    cout << "First element of numbers: " << *p << " is at address " << p <<endl;
    p++;
    cout << "Second element of numbers: " << *p << " is at address " << p <<endl;

    // End of array
    cout << "End address of numbers array: " << sizeof(numbers) << endl;

    return 0;
}