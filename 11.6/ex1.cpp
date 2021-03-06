#include <iostream>
using namespace std;

//(1) Allowed case 
class Something {
    private: 
        int _var;
    public:
        Something() {_var = 1;};
        int get(){return _var;};
};

//(2) not allowed
class Something2 {
    private:
        const int _var;
    public:
        Something2() {_var = 2;};
        int get(){return _var;};
};

int main() {
    Something smth;
    cout << smth.get() << endl;
    Something2 smth2;
    cout << smth2.get() << endl;
}