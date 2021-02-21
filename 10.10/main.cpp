#include <iostream> 
using namespace std;

int main() {
    //(1) what prints?
    // int *ptr1;
    // int x = 20;
    // ptr1 = &x;
    // cout << *ptr1 << endl;
    // x = 10;
    // cout << *ptr1 << endl;   

    // cout << &x << ' ' << ptr1 << endl;
    //(2) what prints?
    int *ptr2; 
    int y = 20;
    cout << "ptr2 address: " << ptr2 << endl;
    cout << "y address   : " << &y << endl;

    // *ptr2 = y;
    // cout << *ptr2 << endl;
    // y = 10;
    // cout << *ptr2 << endl;
}