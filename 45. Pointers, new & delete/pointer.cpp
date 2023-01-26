// Pointers Revisit
// Used to store address of a variable

#include <iostream>
using namespace std;

int main() {
    // Pointer eg
    int a = 4;
    int *ptr = &a;

    // Use * with pointer variable to access value at address and not using * will give the address.
    // using * is called dereferencing
    cout << "The value of a is: " << *ptr << endl
         << "and its address in memory is: " << ptr << endl;
    
    // new keyword : used to dynamically allocate a value to memory.
    // using new keyword we created a pointer variable directly and dynamically without first creating a variable with value.
    float *p = new float(45.54);

    cout << "The value of p is: " << *p << endl
         << "and its address in memory is: " << p << endl;

    // create pointer array using new keyword
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;  // another way of indexing to assign value in an array.
    arr[2] = 30;

    cout << "The value at arr[0] is: " << arr[0] << endl;
    cout << "The value at arr[1] is: " << arr[1] << endl;
    cout << "The value at arr[2] is: " << arr[2] << endl;

    // delete operator: used to free up memory that is occupied by the variables.
    // as C++ does not have a garbage collector, it will not free up the memory by itself.
    delete[] arr; //  use[] with delete to free up a block of memory like an array.
    delete p;  // plain delete will free up a single unit of memory occupied by the variable.
    cout << "\nThe value of p after delete is: " << *p << endl
         << "and its address in memory is: " << p << endl;

    cout << "The value at arr[0] after delete is: " << arr[0] << endl;
    cout << "The value at arr[1] after delete is: " << arr[1] << endl;
    cout << "The value at arr[2] after delete is: " << arr[2] << endl;

    return 0;
}
