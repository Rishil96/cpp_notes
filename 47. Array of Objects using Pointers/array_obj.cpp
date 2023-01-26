// Array of objects using pointer

#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

    public:
        void setData(int a, float b){
             id = a;
             price = b;
        }
        void getData(){
            cout << "ID of product: " << id << endl
                 << "Price of product: " << price << endl; 
        }
};

int main() {
    
    int size = 3;
    int p;
    float q;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter ID and price of shop item " << i + 1 << endl;
        cin >> p >> q;

        ptrTemp -> setData(p, q);
        ptrTemp++;
    }

    ptrTemp = ptr;

    for (int j = 0; j < size; j++)
    {
        ptrTemp -> getData();
        ptrTemp++;
    }
    
    

    return 0;
}