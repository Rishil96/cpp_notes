// List in C++ STL

/*
    We use list when we know we will be doing a lot of insertion and deletion operations from the middle of the list.
    Array gives faster access using index. (due to contiguous memory)
    List gives faster insert and delete operations. (due to non-contiguous memory)
*/


#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l1){
    list<int> :: iterator it;  // This is a reference to the first element of the list
    for (it=l1.begin(); it != l1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list<int> list1; // list of zero length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    list1.sort();   // Sort the list
    display(list1);
    
    list<int> list2(7); // empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 62;
    iter++;
    *iter = 89;
    display(list2);
    list2.pop_back();   // Remove last node from the list
    display(list2);
    list2.pop_front();  // Remove first node from the list
    display(list2);
    list2.remove(89);   // Removes all occurences of the passed argument from the list.
    display(list2);

    list1.merge(list2);
    cout << "LIST 1 after merging with LIST 2: " << endl;
    display(list1);
    list1.sort();
    display(list1);

    list1.reverse();        // Reverse the list
    display(list1);

    return 0;
}