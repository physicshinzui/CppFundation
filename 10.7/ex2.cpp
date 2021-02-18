#include <iostream> 
using namespace std;

//prototype declaration
int add(int x, int y);
double add(double x, double y);

int add(int x, int y) {
    cout << "int add function!" << endl;
    return x + y;
}
double add(double x, double y) {
    cout << "double add function!" << endl;
    return x + y;
}

/* 
The compiler is able to determine which version of add() to call based on the arguments used in the function call.
*/

int main() {
    cout << add(1, 2) << endl;
    cout << add(2.1, 4.0) << endl; 
    cout << add(2, 4.0) << endl; // Oops.  error: call of overloaded 'add(int, double)' is ambiguous
}