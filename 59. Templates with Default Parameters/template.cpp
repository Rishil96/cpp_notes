// Templates with Default Parameters

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Rishil
{
    T1 a;
    T2 b;
    T3 c;
    public:
        Rishil(T1 a, T2 b, T3 c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
        void display(){
            cout << "Value of a: " << a << endl 
                 << "Value of b: " << b << endl
                 << "Value of c: " << c << endl;
        }
};

int main() {
    Rishil<> r1(5, 5.5, 'R');
    r1.display();

    cout << endl;
    
    Rishil<char, char, char> r2('R', 'R', 'R');
    r2.display(); 

    return 0;
}