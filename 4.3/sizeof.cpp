#include <iostream> 
using namespace std;

int main() {
    int x = 1; 
    long xx = 2;
    long long xxx = 3;
    char c = 'A';
    float f = 1.111;
    double d = 3.1415;
    
    cout << sizeof(x)  << " byte (int) " << endl;
    cout << sizeof(xx) << " byte (long) " << endl;
    cout << sizeof(xxx) << " byte (long long) " << endl;
    cout << sizeof(long) << " byte (long) " << endl;
    cout << sizeof(c)  << " byte (char)" << endl;
    cout << sizeof(f)  << " byte (float)" << endl;
    cout << sizeof(d)  << " byte (double)" << endl;
}