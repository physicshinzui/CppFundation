#include <iostream>
using namespace std;

void addOne(int &x) {
    x = x + 1;
}

int addOne2(const int &x) {
    //x = x + 1; this can't be compiled due to the const specifier of the parameter. 
    return x + 1;
}

int main() {
    int x = 2;
    const int c = 5;
    
    cout << x << endl;
    addOne(x);
    cout << x << endl;
    cout << addOne2(x) << endl;
    //addOne(c); this causes an compile error because c is const and addOne can't take a const argument. 
}