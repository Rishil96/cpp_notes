// Multilevel Inheritance

/*
    if we are inheriting B from A and C from B (A -> B -> C):-
    1. A is the base class for B and B is the Base class for C.
    2. ABC is called Inheritance Path.
*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;

public:
    void setRollNumber(int);
    void getRollNumber();
};

void Student ::setRollNumber(int r)
{
    rollNo = r;
}

void Student ::getRollNumber()
{
    cout << "The Roll number is: " << rollNo << endl;
}

class Exam : public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam ::setMarks(float m, float p)
{
    maths = m;
    physics = p;
}

void Exam ::getMarks()
{
    cout << "Maths: " << maths << endl;
    cout << "Physics: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void displayResult()
    {
        getRollNumber();
        getMarks();
        cout << "Your percentage is: " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result rishil;
    rishil.setRollNumber(420);
    rishil.setMarks(94.5, 98);

    rishil.displayResult();

    return 0;
}
