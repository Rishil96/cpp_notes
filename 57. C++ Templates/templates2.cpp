#include <iostream>
using namespace std;

template <class T>
class Product
{
    T a, b;
    public:
        Product(T n1, T n2){
            a = n1;
            b = n2;
        }

        T getProduct(){
            return a * b;
        }
};

int main() {
    
    Product <int>p1(4, 7);
    Product <float>p2(4.5, 7.2);
    Product <double>p3(4.54, 7.21);

    int ans1 = p1.getProduct();
    float ans2 = p2.getProduct();
    double ans3 = p3.getProduct();

    cout << "Integer Multiplication: " << ans1 << endl
         << "Float Multiplication: " << ans2 << endl
         << "Double Multiplication: " << ans3 << endl;

    return 0;
}