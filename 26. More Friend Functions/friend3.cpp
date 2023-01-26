// Friend functions
// Complicated Example

#include <iostream>
using namespace std;

class c2;

class c1
{
    int val;
    public:
        void setVal(int a){
            val = a;
        }
        void display(){
            cout << "Value is: " << val << endl;
        }
    friend void exchange(c1 &, c2 &);
};

class c2
{
    int val;
    public:
        void setVal(int a){
            val = a;
        }
        void display(){
            cout << "Value is: " << val << endl;
        }
    friend void exchange(c1 &, c2 &);
};

// Function to swap data of class c1 and c2
// hint : use call by reference
void exchange(c1 &x, c2 &y){
    int temp = x.val;
    x.val = y.val;
    y.val = temp;
}


int main() {
    
    c1 obj1;
    obj1.setVal(25);
    cout << "Object 1 before swap" << endl; 
    obj1.display();
    
    c2 obj2;
    obj2.setVal(52);
    cout << "Object 2 before swap" << endl; 
    obj2.display();

    exchange(obj1, obj2);

    cout << "Object 1 after exchange: " << endl;
    obj1.display();
    cout << "Object 2 after exchange: " << endl;
    obj2.display();

    return 0;
}