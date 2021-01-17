#include <iostream> 
using namespace std;

const int & addOne(int x) {
    const static int xx = x + 1;
    return xx;
}

int main() {
    const int &xx = addOne(1);
    cout << xx << endl;
}