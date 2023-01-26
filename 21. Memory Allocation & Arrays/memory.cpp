// Memory Allocation

/* In C++, the member functions of a class is common for all objects of that all so it is assigned only once in the memory. But the variables of a class will differ from object to object so it is assigned different memory for different objects. C++ compiler does this on its own without any human intervention.*/

// In C++, the methods of a class are commonly referred to as member functions.

#include <iostream>
using namespace std;


class Shop
{
    private:
        int itemID[100];
        int itemPrice[100];
        int counter;
    public:
        void initCounter(void) {counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void) 
{
    cout << "Enter ID of your item number " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;             // Counter will increase for each added item
}

void Shop :: displayPrice(void) 
{
    for (int i = 0; i < counter; i++) {
        cout << "The price of item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}



int main() {
    Shop bakery;
    bakery.initCounter();
    
    for (int i = 0; i < 3; i++) {
        bakery.setPrice();
    }

    bakery.displayPrice();

    return 0;
}