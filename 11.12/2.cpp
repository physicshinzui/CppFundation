#include <iostream> 
using namespace std;

class Something 
{
private:
    string _name;
public:
    Something(string name = "") : _name{name} 
    {
    }
    void printName() 
    {
        cout << _name << endl;
    }
};

void func(Something &obj) // take a reference of an object Something
{
    obj.printName();
    cout << &obj << endl;
}

int main()
{
    Something smth{"Merci"};
    cout << &smth << endl;
    //smth.printName();
    func(smth);
}