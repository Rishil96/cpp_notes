// Dynamic Initialization of Objects using Constructors
// Here dynamic means at run time

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){}  // A blank constructor is created so that we can simply declare 
                         // an object initially without assigning values to it and then overwrite it
                         // after receiving values from the end user of the program/software.
        BankDeposit(int p, int y, float r); // r can be in fraction (float) or % (int)
        BankDeposit(int p, int y, int r); // r can be in fraction (float) or % (int)

        void show();

};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;

    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;

    returnValue = principal;

    for (int i = 0; i < y; i++) 
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit :: show() {
    cout << endl << "Principal Amount was " << principal 
         << ". Returns after " << years << " years is " 
         << returnValue << endl;
}

int main() {
    BankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;   

    cout << "\nEnter the principal amount, number of years and Interest rate: " << endl;
    cin >> p >> y >> r;
    
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    
    cout << "Enter the principal amount, number of years and Interest rate: " << endl;
    cin >> p >> y >> R;
    
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    bd3.show();

    return 0;
}