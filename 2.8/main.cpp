#include <iostream> 
using namespace std;

void func(int x) {
    cout << x * 2 << endl;
}

void func(int x) {
    cout << x * 3 << endl;
}


int main () {
    int  x = 4; 
    func(x);
}