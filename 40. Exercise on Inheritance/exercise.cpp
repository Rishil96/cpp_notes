#include <iostream>
#include <math.h>
using namespace std;

/*
    Create 2 classes:-
        1. Simple Calculator - +, - ,*, /
        2. Scientific Calculator - log, sin, cos, tan
    
    Create Hybrid Calculator class that inherits from both the calculators.
*/

class SimpleCalculator
    {
        int num1, num2;

        public:
            void getValues(){
                cout << "Enter first and second number: " << endl;
                cin >> num1 >> num2;
            }
            
            void add(){
                getValues();
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            }
            
            void subtract(){
                getValues();
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            }
            
            void multiply(){
                getValues();
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            }
            
            void divide(){
                getValues();
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }

            void operateSimple(){
                int o;
                cout << "Choose an operator: " << endl;
                cout << "1 : +" << endl;
                cout << "2 : -" << endl;
                cout << "3 : *" << endl;
                cout << "4 : /" << endl;
                cin >> o;

                if (o == 1) {
                    add();
                }
                else if (o == 2) {
                    subtract();
                }
                else if (o == 3) {
                    multiply();
                }
                else if (o == 4) {
                    divide();
                }
                else{
                    cout << "Invalid Operator!" << endl;
                }
            }

    };

class ScientificCalculator
{
    float num;
    
    public:    
        void getNum(){
            cout << "Enter a number: " << endl;
            cin >> num;
        }

        void sinValue(){
            getNum();
            cout << "sin(" << num << ") = " << sin(num) << endl;
        }

        void cosValue(){
            getNum();
            cout << "cos(" << num << ") = " << cos(num) << endl;
        }

        void tanValue(){
            getNum();
            cout << "tan(" << num << ") = " << tan(num) << endl;
        }

        void logValue(){
            getNum();
            cout << "log(" << num << ") = " << log(num) << endl;
        }

        void operateScientific(){
            int o;
            cout << "Choose an operation: " << endl;
            cout << "1 : sin" << endl;
            cout << "2 : cos" << endl;
            cout << "3 : tan" << endl;
            cout << "4 : log" << endl;
            cin >> o;

            if (o == 1){
                sinValue();
            }
            else if (o == 2){
                cosValue();
            }
            else if (o == 3){
                tanValue();
            }
            else if (o == 4){
                logValue();
            }
            else{
                cout << "Invalid Operation!" << endl;
            }
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    int o;
    public:
        void calculate(){
            cout << "Welcome to Hybrid Calculator!" << endl 
                 << "Type 1 for Simple Calculator." << endl 
                 << "Type 2 for Scientific Calculator." << endl;
            cin >> o;

            if (o == 1) {
                operateSimple();
            }
            else if(o == 2) {
                operateScientific();
            }
            else{
                cout << "Invalid choice!" << endl;
            }

            cout << "Thanks for using Hybrid Calculator!";
            
        }
};

int main() {
    
    HybridCalculator calc;
    calc.calculate();

    return 0;
}