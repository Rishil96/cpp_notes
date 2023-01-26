// Member Function Templates

#include <iostream>
using namespace std;

template <class T>
class Rishil
{
    public:
        T data;
        Rishil(T a){
            data = a;
        }
        void display();
};

// Following is the syntax to define the member function of a template class outside the class using scope resolution.
template <class T>
void Rishil<T> :: display(){
    cout << "DATA: " << data << endl;
}


// Function overloading with template functions and normal functions
void func(int a){
    cout << "I am func() " << a << endl;
}

template <class T>
void func(T a){
    cout << "I am Template func() " << a <<endl;
}

int main() {
    Rishil<string> r1("Rishil");
    Rishil<char> r2('R');
    Rishil<int> r3(888);

    r1.display();
    r2.display();
    r3.display();
    
    // Overloading functions with same name and one function as a template function.

    func(44);      // Here both functions can be a match for this function call (line 25 and 29) but exact match takes the highest priority over a match using template so the non-template function will be executed in this case.

    func("Rishil"); // Here since non-template function is not a match, template function will be executed.

    return 0;
}