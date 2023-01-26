// Basic Control Structures : 3 types
/*
1. Sequence Structure: Entry - Action1 - Action2 - ... - End
2. Selection Structure: Entry - Condition - Action based on condition - End
3. Loop Structure : Entry - Repeat loop based on condition - End
*/


#include <iostream>

using namespace std;

int main() {

    // If-else
    int age, age2;
    cout<<"Tell me your age (If else): "<<endl;
    cin>> age;

    if ((age < 18) && (age > 0)) {
        cout<< "You are not an adult!";
    }
    else if (age == 18) {
        cout<< "You just turned an adult!";
    }
    else if (age <= 0) {
        cout<< "You are not yet born!";
    }
    else {
        cout<< "You are an adult!";
    }

    // Switch case
    cout<<"\nTell me your age2 (Switch case): "<<endl;
    cin>> age2;
    switch (age2)
    {
    case 18:
        cout<<"\nYou are 18"<<endl;
        break;
    case 25:
        cout<<"\nYou are 25"<<endl;
        break;
    case 50:
        cout<<"\nYou are 50"<<endl;
        break;
    
    default:
        cout<<"No special cases!!";
        break;
    }

    cout<< "\nSelection Control Complete!";

    return 0;
}