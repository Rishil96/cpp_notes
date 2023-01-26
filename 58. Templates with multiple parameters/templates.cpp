// Templates with Multiple Parameters

#include <iostream>
using namespace std;

template <class T1, class T2> // Multiple parameters can be passed using comma
class myClass{
    T1 data1;
    T2 data2;
    public:
        void setData(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout << "Data 1: " << data1 << endl
                 << "Data 2: " << data2 << endl;
        }
};

int main() {
    myClass<int, char> obj;
    obj.setData(5, 'R');
    obj.display();

    myClass<char, float> obj2;
    obj2.setData('S', 5.5);
    obj2.display();

    return 0;
}