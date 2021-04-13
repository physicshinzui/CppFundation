#include <iostream> 
using namespace std;

class Base 
{
public:
    int _id{};
    Base(int id = 0) 
        : _id{id}
    {
        cout << "Base object" << endl; 
    } 
    int getID() const {return  _id;} 
};

class Derived : Base
{
public:
    double _cost{};
    Derived(double cost = 0.0, int id = 1) 
        : Base{id}, _cost{cost}
    {
        cout << "Derived object" << endl; 
    }
    double getCost() const { return _cost;}
};

int main()
{
    //Base base{5};
    Derived der{100.0, 10};
    cout << der.getCost() << ' ' << der.getID() << endl;

    return 0;
}