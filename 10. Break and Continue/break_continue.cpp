#include <iostream>
using namespace std;

int main() {

    // Using break to break out of the loop
    cout << "Break keyword in action" << endl;
    for (int i=0; i<=25; i++) {
        cout << i << endl;
        if (i == 4) {
            cout << "Exiting loop!" << endl;
            break;
        }
    }

    // Continue : to skip the current iteration and move to the next one.
    cout << "Continue Keyword in action" << endl;
    for (int i = 0; i<=100; i++) {
        if (i % 5 == 0) {
            continue;
        }
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}