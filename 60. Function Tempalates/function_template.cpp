// Function Template

#include <iostream>
using namespace std;

template <class T1, class T2>   // Function templates are declared the same way as class templates
float funcAverage(T1 a, T2 b){
    float average = (a + b) / 2.0;
    return average;
}

template <class T>
void swap_var(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    float avg = funcAverage(5, 2);
    printf("The average of these numbers is %f", avg);

    float avg2 = funcAverage(5.6, 2.2);
    printf("\nThe average of these numbers is %.2f", avg2);

    int x = 10, y = 20;
    swap_var(x, y);
    cout << "\nX is " << x << endl
         << "Y is " << y << endl;
    return 0;
}