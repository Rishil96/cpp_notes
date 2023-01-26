// Pointer to Object and Arrow operator

// Note: if we create variable a and set b=a and *c = &a, then if we change value of a, the value of b won't change with a as it just made a copy of the value of a when we set b = a whereas c will change with a as c is basically pointing to the address of a so whatever that address will have as value, c will have it as it is a pointer.


#include <iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout << "Real value: " << real << endl;
            cout << "Imaginary value: " << imaginary << endl;
            cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main() {
    Complex c1;
    Complex *ptr = &c1;  // Pointer to an object
    Complex *ptr2 = new Complex; // Create an object directly to memory using new keyword
    // Since we will use . operator to call member functions, we have to enclose the *pointer in parenthesis
    (*ptr).setData(4, 5);   
    (*ptr).getData();
    

    // Arrow operator: ptr -> memberFUnction();
    // -> means to dereference. So in above eg: ptr will be dereferenced using (->) and member function will be called.
    ptr2 -> setData(7, 8);   // Arrow operator is the same as using a pointer to call a . member function instead we use arrow like notation in place of (*ptr).memberFunction();
    (*ptr2).getData();
    

    // Array of Objects of a custom Class
    Complex *ptrArr = new Complex[3];

    ptrArr -> setData(1, 1);
    ptrArr -> getData();

    ptrArr = ptrArr + 1;
    ptrArr -> setData(2, 2);
    ptrArr -> getData();


    return 0;
}