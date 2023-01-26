/* Primary variable types are int, float, char, double and boolean */
/* Char just stores a single character of 1 byte */
/* Datatypes are categorized in 3 types: built in, user defined and derived */

/*
Built In Datatypes
int - 3, 4, 5
float (low precision decimal)- 3.55, 4.21
char - 's', 'A'
double (high precision decimal) - 7.34234243, 2.343543534
*/

/*
User defined Datatypes
Struct
Union
Enum
*/

/* 
Derived datatype
Array
Pointer
Function
*/

# include<iostream>

using namespace std;
int glo = 9;

int main() {
    // Example showing local variable takes precedence over global variable
    int a = 20;
    int b = 40;
    float pi = 3.14, d = 2.5;
    char initial = 'R';
    bool is_true = true;
    bool is_false = false;

    cout<<"\nThis code is for variable scope and datatypes.";
    cout<<"\nThe value of a is "<< a <<".\nThe value of b is "<< b;
    cout<<".\nThe value of pi is "<< pi;
    cout<<"\nMy name starts with "<< initial;
    cout<< glo;
    cout<<"\n True: "<<is_true;
    cout<<"\n False: "<<is_false;
    return 0;
}

