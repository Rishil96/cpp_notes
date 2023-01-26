// Map in STL
/*
    Map is an associative array.
    Stores data as a key:value pair (like a python dictionary or JSON)
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> marksMap;
    marksMap["Rishil"] = 98;    // add new key value pair in the map object.
    marksMap["Ashwin"] = 75;
    marksMap["Harry"] = 62;

    marksMap.insert({"Ankit", 82});     // Insert single element in the map
    marksMap.insert({{"Pranjal", 97}, {"Shawn", 77}});      // Insert multiple elements in the map  

    map<string, int> :: iterator iter;  // map iterator
    
    for (iter=marksMap.begin(); iter != marksMap.end(); iter++){
        cout << (*iter).first << ": " << (*iter).second << endl;
    }

    // Some extra member functions of map
    cout << "Size of map: " << marksMap.size() << endl;
    cout << "Max Size of map: " << marksMap.max_size() << endl;
    cout << "Empty return value: " << marksMap.empty() << endl;


    return 0;
}