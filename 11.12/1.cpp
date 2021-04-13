#include <iostream> 
using namespace std;
class Something
{
public:
    int m_value {};
    Something(): m_value{0} { }
    void setValue(int value) { m_value = value;}
    int getValue() const { return m_value;}
};


int main()
{
    const Something smth;
    // smth.m_value = 10; //not allowed because of const specifier
    // smth.setValue(11); //not allowed ..
    cout << smth.getValue() << endl; // can't be called by the const object. we need to define a member function with const to do so.
}
