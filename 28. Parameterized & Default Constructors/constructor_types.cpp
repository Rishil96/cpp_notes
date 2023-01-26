// Default and Parameterized Constructors

// Default Constructor: accepts no arguments when an object is initialized.
// Parameterized Constructor: accepts arguments when an object is initialized.

#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
    int a, b;
    public:
        Complex(int x, int y) {
            a = x;
            b = y;
        }

        void getNumber(void) {
            cout << "Complex Number is: " << a << " + " << b << "i" << endl;
        }
};

class Point
{
    int x, y;
    public:

        friend void distance(Point a, Point b);

        Point(int a, int b) {
            x = a;
            y = b;
        }
        void displayPoint() {
            cout << "Point is : (" << x << ", " << y << ")" << endl;
        }

};

void distance(Point a, Point b) {
    int x_dist = b.x - a.x;
    int y_dist = b.y - a.y;
    float dist = sqrt((x_dist * x_dist) + (y_dist * y_dist));
    cout << "\nDistance between (" << a.x << ", " << a.y << ") and (" <<  b.x << ", " << b.y << ") is: " << dist << endl;
};

int main() {
    
    // Implicit Call
    Complex obj1(3, 4);

    // Explicit Call
    Complex obj2 = Complex(7, 8);

    obj1.getNumber();
    obj2.getNumber();

    cout << endl;

    // Points
    Point p1(1, 1), p2(1, 1);

    p1.displayPoint();
    p2.displayPoint();

    distance(p1, p2);
    
    return 0;
}
