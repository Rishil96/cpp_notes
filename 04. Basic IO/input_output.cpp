/* In C++ sequence of bytes corresponding to input and output are commonly called as streams. */
/* Input Stream: Direction of flow of bytes takes place from I/P device (keyboard) to the main memory.*/
/* Output Stream: Direction of flow of bytes takes place from main memory to the O/P device (Display). */
/* cin is used to take input from the user. */

#include <iostream>

using namespace std;
int main()
{
    /* code */
    int num1, num2;
    cout<< "Enter the value for num1: "; // "<<" is called the insertion operator used to print stuff
    cin>> num1; // ">>" is called the extraction operator used to read stuff
    
    cout<< "Enter the value for num2: "; // "<<" is called the insertion operator used to print stuff
    cin>> num2; // ">>" is called the extraction operator used to read stuff

    cout<< "The sum is: "<< num1 + num2;

    return 0;
}
