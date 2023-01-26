// Abstract Base Class

/*
Every Abstract Base Class has a pure virtual function in it.
Basically, the classes that are created for the sole purpose of creating derived classes from it and it won't be used by itself can be called as an Abstract base class.

Pure virtual function is a function that has to be overriden by the function in the derived class.
Look at the syntax below
We set the virtual function = 0 saying that we "must" create a function with the same name in any and all of the derived classes.

Abstract class is a class that cannot be used to create an object. It can only be used to derive other classes from it.
Abstract base classes has "atleast" one pure virtual function.
*/

#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display() = 0; // Do nothing function --> Pure virtual function
};

class CWHVideo : public CWH
{
    protected:
        float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout << "Video Title: " << title << endl
                 << "Video Rating: " << rating << endl
                 << "Video Length: " << videoLength << endl;
        }
};

class CWHText : public CWH
{
    protected:
        int words;
    public:
        CWHText(string s, float r, int w) : CWH(s, r){
            words = w;
        }
        void display(){
            cout << "Tutorial Title: " << title << endl
                 << "Tutorial Rating: " << rating << endl
                 << "Tutorial Word Count: " << words << endl;
        }
};


int main() {
    string title = "C++ Tutorials";
    float rating = 4.8;
    float vlen = 12.5;
    int words;

    CWHVideo cppVideo(title, rating, vlen);
    
    rating = 4.5;
    words = 505;
    CWHText cppText(title, rating, words);
    
    CWH *ptr[2];
    ptr[0] = &cppText;
    ptr[1] = &cppVideo;

    for (int i=0; i < sizeof(ptr); i++){
        cout << endl;
        ptr[i] -> display();
    }

    return 0;
}