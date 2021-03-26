#include <iostream>
using namespace std;

int main() {
    int array[2000000];
    double mega = 1000000.0;
    cout << sizeof(array)/mega << " MBs" << endl;
}