#include <iostream> 
using namespace std;

int main() {
    int val1{1};
    double val2{0.1};
    cout << val1 << endl;
    cout << "address-of operator gives memory location: "<< endl;
    cout << &val1 << endl;
    cout << &val2 << endl;
    cout << *(&val1) << endl;
}