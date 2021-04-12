#include <iostream> 
using namespace std;

class Base {
    private: 
        int _id{};

    public:
        Base(int id = 0) : 
            _id{id} 
        { 
            cout << "Base class" << endl;
        }
};

class Derived : public Base {
    private:
        int _id_der{};
    public:
        Derived(int num = 0) : 
            _id_der{num}
        { 
            cout << "Derived class" << endl;
        }

};

int main() {
    Derived der;
    cout << &der << endl;
}
