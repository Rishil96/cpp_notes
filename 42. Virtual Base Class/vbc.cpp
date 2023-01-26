// Virtual Base Class Implementation

// Create Base class Student, 
// Derived classes Test, Sports from Student 
// and a derived class Result deriving from Test and Sports.

#include <iostream>
using namespace std;


class Student
{
    protected:
        int rollNo; 
    public:
        void setNumber(int a){
            rollNo = a;
        }
        void printNumber() {
            cout << "Your roll number is: " << rollNo << endl;
        }
};


class Test : virtual public Student
{
    protected:
        float maths, physics;
    public:
        void setMarks(float m, float p){
            maths = m;
            physics = p;
        }
        void printMarks() {
            cout << "Your marks are: " << endl
                 << "Maths: " << maths << endl 
                 << "Physics: " << physics << endl; 
        }
};


class Sports : virtual public Student
{
    protected:
        float score;
    public:
        void setScore(int a){
            score = a;
        }
        void printScore() {
            cout << "Your PT score is: " << score << endl;
        }
};


class Result : public Test, public Sports
{
    private:
        float total;
    public:
        void display(){
            total = physics + maths + score;
            printNumber();
            printMarks();
            printScore();
            cout << "Your total score is: " << total << endl 
                 << "Your percentage is: " << total / 3 << "%" << endl;
        }
    
};

int main() {
    Result rishil;

    rishil.setNumber(1111);
    rishil.setMarks(89, 85);
    rishil.setScore(95);
    rishil.display();

    return 0;
}
