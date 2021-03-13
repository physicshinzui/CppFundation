#include <iostream> 
using namespace std;

int main() {
    int v = 10;
    int* iptr{&v};
    cout << "The following must be the same" << endl;
    cout << &v << '\n' << iptr << endl;

    int w{20};
    double* dptr{&w};
    cout << &w << '\n' << dptr << endl;
}