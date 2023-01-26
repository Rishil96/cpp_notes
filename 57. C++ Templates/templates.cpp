/* 
C++ Templates
    - This means creating a class with some functionality which can be used with different datatypes
    - Example: for a class Vector, if we want a vector object for char, int and float, we would have to create 3 classes, 1 for each datatype.
    - Templates helps us to solve this problem
    - Templates are also called as parameterized classes.
    - Helps us follow DRY principle.
    - Generic programming (same template can be used for multiple datatypes)
    - Like classes create objects, templates create classes.
    Syntax:
        template <class T>
        class Vector{
            T *arr;
            public:
                Vector(T* ar){
                    code
                    ...
                }
        }

    - T will act as a placeholder for the datatype that we will provide to the class.
    - initialize template Vector : Vector <int> myVec(ptr);
                                   Vector <char> myVec2(ptr2);
*/


#include <iostream>
using namespace std;

template <class T>
class Vector
{
    public:
    T *arr;
    int size;
        Vector(int s){
            size = s;
            arr = new T[size];
        }

        T dotProduct(Vector &v){
            T d = 0;
            for (int i=0; i < size; i++){
                d += this -> arr[i] * v.arr[i]; // this is used to use the objects arr and v for argument arr.
            }
            return d;
        }

};

int main() {

    Vector <float>v1(3);  // Specifying the datatype float for template class Vector v1
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    
    Vector <float>v2(3); // Specifying the datatype float for template class Vector v2
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;

    float dot = v1.dotProduct(v2);
    cout << "Dot Product: " << dot;
    return 0;
}