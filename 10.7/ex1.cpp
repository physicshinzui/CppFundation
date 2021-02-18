#include <iostream> 
using namespace std;

int intadd(int x, int y) {
    return x + y;
}

double doubleadd(double x, double y) {
    return x + y;
}

int main() {
    int x{2}, y{4};
    cout << intadd(x, y) << endl;
    cout << doubleadd(x, y) << endl;//Ops, this does not cause any error even though x and y are different from those expected by doubleadd. 
     
    
}