// Virtual Functions Example

/*
Rules for Virtual functions:-
    1. Cannot by static.
    2. Are accessed by object pointers.
    3. Virtual functions can be a friend of another class.
    4. A function in base class might not be used.
    5. If a virtual function is defined in a Base class there is no necessity of redefining it in the derived class. Virtual function will only be ignored in run time if the derived class has the same function present in it.
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
        virtual void display(){}
};

class CWHVideo : public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout << "Video Title: " << title << endl
                 << "Video Rating: " << rating << endl
                 << "Video Length: " << videoLength << " minutes" << endl;
        }
};

class CWHText : public CWH
{
    int words;
    public:
        CWHText(string s, float r, int w) : CWH(s, r){
            words = w;
        }
        void display(){
            cout << "Tutorial Title: " << title << endl
                 << "Tutorial Rating: " << rating << endl
                 << "Tutorial Words: " << words << endl;
        }
};


int main() {
    string title;
    float rating, vlen;
    int words;

    // For CWH Videos
    title = "C++ Video";
    vlen = 10.5;
    rating = 4.5;

    CWHVideo cppVideo(title, rating, vlen);
    cppVideo.display(); // Since display function in base class was virtual, the display of Derived class will be executed.

    cout << endl;

    // For CWH Text
    title = "C++ Tutorial";
    words = 150;
    rating = 4.2;

    CWHText cppText(title, rating, words);
    cppText.display(); // Since display function in base class was virtual, the display of Derived class will be executed.

    // Create pointers
    CWH *tutorials[2];
    tutorials[0] = &cppText;
    tutorials[1] = &cppVideo;

    for (int i=0; i < sizeof(tutorials); i++){
        cout << endl;
        tutorials[i] -> display();
    }

    return 0;
}