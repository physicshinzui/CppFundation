#include <iostream>
using namespace std;

int main() {
    int x{10};
    int* ptr{&x};
    cout << ptr << endl;
    *ptr = 5;
    cout << x << endl;
}