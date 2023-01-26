// this pointer

#include <iostream>
using namespace std;

class A
{
    int a;
    public:
        void setData(int a){
            /* 1. this keyword is a pointer which points to the object which invokes the member function.
               2. here without using this keyword, the a on the left will be considered as the same a that is the name of the parameter to the member function. 
               3. But when we use this, we basically say that a is not the parameter we are referring to, but we mean the object a. 
               4. So, the data member a will be used instead of the member function parameter a.
               5. this can also be used to return the object itself.
               */
            this -> a = a;
        }

        A& setData2(int a){
            this -> a = a;
            return *this;
        }

        void getData(){
            cout << "Value of a: " << a << endl;
        }
};

int main() {
    A a1;
    a1.setData(88);
    a1.getData();

    // Because we are returning the object itself using this keyword, we can call another member function using . notation.
    a1.setData2(44).getData();

    return 0;
}