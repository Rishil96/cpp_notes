// STL : Vector
/*
    - Similar to an array.
    - Manages size automatically.
    - 
*/

#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector <T> &v){ 
    // Taking reference of a variable won't make a copy and use the actual variable.
    cout << "\nSize of vector is: " << v.size() << endl;
    for (int i=0; i < v.size(); i++){
        cout << v[i] << " ";
        // cout << "Element using at " << i << ": " << v.at(i) << endl;
    }
    cout << endl;
}

int main() {
    vector<int> vec1; // zero length integer vector
    vector<char> vec2(4); // character vector of length 4
    vector<char> vec3(vec2); // character vector of length 4 made from vec 2
    vector<int> vec4(6, 3); // integer vector of length 6 made of 3(all elements are 3).
    
    int element, size;

    cout << "Enter size of your vector: " << endl;
    cin >> size;

    for (int i=0; i < size; i++){
        cout << "Iteration number: " << i << endl;
        cout << "Enter an element to push into the array: " << endl;
        cin >> element;
        vec1.push_back(element); // Add elements to the vector
    }

    vec1.pop_back();  // Pop last element from the vector
    
    display(vec1);

    // Iterator of a vector
    vector<int> :: iterator iter = vec1.begin(); // Syntax to create an iterator of a container

    // vector.insert(iterator, number of copies, element)

    vec1.insert(iter, 777); // Insert element in the middle requires an iterator
    // the value will be inserted at the location the iterator is pointing to.
    vec1.insert(iter+2, 3, 88);
    // Optional middle parameter is to give a count of how many times/copies the element must be inserted
    display(vec1);


    // Get first and last element of the vector
    cout << "First element of vector 1: " << vec1.front() << endl;
    cout << "Last element of vector 1: " << vec1.back() << endl;

    return 0;
}