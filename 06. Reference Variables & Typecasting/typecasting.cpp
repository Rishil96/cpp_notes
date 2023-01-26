#include <iostream>

using namespace std;

int c = 45;

int main() {
    int a, b, c;
    cout<< "Enter the value for a:"<<endl;
    cin>>a;
    
    cout<< "Enter the value for b:"<<endl;
    cin>>b;
    
    c = a + b;
    cout<< "The sum is: "<<c << endl;

    cout<< "The global C is: "<< ::c;

    // By default a decimal number is considered of type double if it is not declared using float
    // To pass 34.4 as a floating point number write it as "34.4f" and for long double use "34.4l"
    float d = 34.5;
    long double e = 34.5;

    cout<< "\nThe value of d is: "<< d<< endl<< "The value of e is: "<< e;

    // Checking the size of different types of floating numbers
    cout<< "The size of 34.4 is: "<<sizeof(34.4)<<endl;
    cout<< "The size of 34.4f is: "<<sizeof(34.4f)<<endl;
    cout<< "The size of 34.4F is: "<<sizeof(34.4F)<<endl;
    cout<< "The size of 34.4l is: "<<sizeof(34.4l)<<endl;
    cout<< "The size of 34.4L is: "<<sizeof(34.4L)<<endl;

    // Reference variables : use & before the variable to create a reference variable to another variable as shown below. This new variable will just refer to the original variable but it is not a copy of the original. changing the original will also change the one it's referring to.

    float x = 4.5;
    float &y = x; 

    cout<<"\n\n*****Reference Variables*****";
    cout<<"\nX: " <<x <<endl;
    cout<<"Y: " <<y <<endl;

    x = x - 1;

    cout<<"X: " <<x <<endl;
    cout<<"Y: " <<y <<endl;

    // Typecasting : Changing the type of variable from one type to another.
    float var1 = 45.46;
    int var2 = int(var1);
    cout<<"\n\n*****Type Casting*****";
    cout<< "\nVar 1 is float: "<< var1 <<endl;
    cout<< "Var 2 is int: "<< var2 <<endl;

    // Results between adding float and int
    cout<< "Var1 + Var2: " <<var1 + var2 <<endl;
    cout<< "int(Var1) + Var2: " <<int(var1) + var2 <<endl;
    cout<< "(int)Var1 + Var2: " <<(int)var1 + var2 <<endl;

    return 0;
}