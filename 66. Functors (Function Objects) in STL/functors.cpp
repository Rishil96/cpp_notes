// Function objects

/*
    Function objects are functions wrapped in a class so that it is available like an object (class object).
    We have multiple functional objects available in C++ in the functional file
*/

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 3, 4, 7, 12, 57, 42, 33};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << size << endl;
    
    sort(arr, arr+5);   // To use sort, give array as first argument and arr + number as second argument where number if the number of elements from the start we want to sort
    
    cout << "Ascending: " << endl;
    
    for (int i=0; i < size; i++){
        cout << arr[i] << " ";
    }

    sort(arr, arr+size, greater<int>());    // greater is a function object used to sort the array in a reverse order.

    cout << "\nDescending: " << endl;

    for (int i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}