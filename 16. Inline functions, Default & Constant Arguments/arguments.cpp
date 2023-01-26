// Inline functions, Default and Constant Arguments


#include <iostream>
using namespace std;

// When a function is called, many steps takes place such as receive actual args and copy it into formal args, perform the operation, return output, etc. So when functions are called multiple times these steps takes place every time.
// If we use inline, then the compiler places the function in the main function call itself during compilation so it won't go through the previously listed steps during runtime.
// Basically where the function is called in the main code, the function is replaced with the function call which kind of beats the purpose of reuseability of functions but it makes the code faster.
// This takes up space in memory so inline functions is only suggested to use in case on very small functions typically with 1 operation. Making large functions inline will result in taking up more memory in cache and will risk running out of memory (RAM).
inline int product(int a, int b) {
    return a*b;
}
// We simply make a request using inline keyword to make a function inline, the compiler decides whether the function will be inline or not.


// Static variables
// Not recommended to use inline functions containing static variables, loops, switch statements
int staticVar() {
    static int c = 0;  // If a variable is initialized with static keyword, it will only run once.
    c = c + 1;       // This c value will be retained when the function is called the next time.
    return c;        // static variable c will get initialized on the first call of this function.
}


// Default arguments 
// Default arguments should always be at the end of the arguments list in the function ()
float calculateInterest(float amount, float interest = 1.04) {
    return amount * interest;
}

// Constant variables : we pass the arguments with a const keyword so that the function does not change the value of the passed variable. Best used with reference variables and pointers.
// int strlen(const char *p) {

// }  Here *p won't be allowed to update in the function.


int main() {
    int a, b;
    float amt = 100000;
    
    cout << "Products using Inline function" <<endl;
    cout << "Enter a and b: " << endl;
    cin >> a >> b;
    cout << "Product of a and b is " << product(a, b);

    // Static variables
    cout << "\nStatic variable working:-" << endl;
    cout << "First call: " << staticVar() << endl;
    cout << "Second call: " << staticVar() << endl;
    cout << "Third call: " << staticVar() << endl;

    // Default arguments
    cout << "The interest on " << amt << " after a year will sum up to the amount of " << calculateInterest(amt) << endl;
    cout << "The VIP interest on " << amt << " after a year will sum up to the amount of " << calculateInterest(amt, 1.10) << endl;

    return 0;
}