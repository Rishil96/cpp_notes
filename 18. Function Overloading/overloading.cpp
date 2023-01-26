// Function Overloading : is a feature of OOP where 2 functions/methods have the same name but different parameters. So the functions with single name can do multiple tasks depending on the arguments provided.

#include <iostream>
using namespace std;

int sum(int a, int b) {
    cout << "\nSum of 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c) {
    cout << "\nSum of 3 arguments" << endl;
    return a + b + c;
}

// Below are 3 functions with same name but returns volumes of different shapes
// Here we are overloading the function with the same name to do multiple different tasks
// Cylinder
float volume(float r, float h) {
    return (3.14 * r * r * h);
}

// Cuboid
float volume(float l, float b, float h) {
    return (l * b *h);
}

// Cube
float volume(float a) {
    return (a * a * a);
}

int main() {
    
    // C++ is intelligent enough to figure out which function to use in which case
    cout << "The sum of 1, 2 is :" << sum(1, 2) << endl;
    cout << "The sum of 1, 2, 3 is :" << sum(1, 2, 3) << endl;

    cout << "Volumes"<< endl;
    cout << "Volume of cylinder of radius 3, height 6 is: " << volume(3, 6) << endl;
    cout << "Volume of cuboid of length 3, breadth 5, height 6 is: " << volume(3, 5, 6) << endl;
    cout << "Volume of cube of side 3 is: " << volume(3) << endl;


    return 0;
}