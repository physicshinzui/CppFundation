#include <iostream> 
using namespace std;

//overloading
int max(int x, int y) {
    return (x > y) ? x : y;
}
double max(double x, double y) {
    return (x > y) ? x : y;
}

//template 
template<typename T>
T mini(T x, T y) {
    return (x < y) ? x : y;
}


int main () {
    cout << max(1,3) << endl;
    cout << max(4,1) << endl;
    cout << max(4.4,1.2) << endl;
    cout << max(1.3,5.2) << endl;
    
    cout << mini(1.2, 1.3) << endl;
    cout << mini(10.1, 1.3) << endl;
    cout << mini<int>(1, 3) << endl;
    //cout << mini(1, 3) << endl; ^equivalent

    cout << mini('a', 'b') << endl;
    return 0;
}