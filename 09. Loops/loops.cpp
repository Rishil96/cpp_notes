// Loops : For, while, do while

#include <iostream>

using namespace std;

int main()
{

    // For loop : for(initialization; condition; updation)
    // Infinite loop will continue to consume memory till it reaches its limit
    cout << "For Loop" << endl;

    for (int i = 1; i < 41; i++)
    {
        cout << i << endl;
    }

    // while loop : while(condition) runs only till the condition remains true
    cout << "While Loop" << endl;

    int z = 1;
    while (z < 11)
    {
        cout << z << endl;
        z++;
    }

    // do-while loop : runs atleast once even if the condition is false in the first attempt
    cout << "Do While Loop" << endl;

    int y = 1;
    do
    {
        cout << y << endl;
    } while (false);

    // Quiz: table of 6
    int table_of = 6, multiple = 0, number_of_multiples;
    cout << "Enter the number of multiples you want: ";
    cin >> number_of_multiples;

    do
    {
        cout << table_of << " X " << multiple << " = " << table_of * multiple << endl;
        multiple++;
    } while (multiple <= number_of_multiples);

    return 0;
}