#include <iostream>
using namespace std;
int main() {
    int x{ 10 };
    int* ptr{ &x };
    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << ptr + 2 << endl;
    cout << ptr + 3 << endl;
    cout << ptr - 1 << endl;
    cout << ptr - 2 << endl;

    short y{ 1 };
    short* ptrs{ &y };
    cout << ptrs + 1 << endl;
    cout << ptrs + 2 << endl;

}