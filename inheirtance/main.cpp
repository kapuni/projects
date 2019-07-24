#include <iostream>

using namespace std;

class Chef{
public:
    void makeChicken(){
        cout << "The chef makes yummy chicken" << endl;
    }
    void makeSalad(){
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish(){
        cout << "The chef makes bbq ribs" << endl;
    }
};

class ChinaChef : public Chef{
public:
    void makesBaozi(){
        cout << "The chef makes baozi" << endl;
    }
    void makeChicken(){
        cout << "The chef makes malaxiangguo" << endl;
    }
};

int main()
{
    Chef chef;
    chef.makeChicken();

    ChinaChef chinachef;
    chinachef.makeChicken();

    return 0;
}
