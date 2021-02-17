#include <iostream> 
using namespace std;

//this is a short code, so can be a candidate to be an inline function. 
inline int mymin(int x, int y) {
    return x > y ? y : x;
}

int main() {
    cout << mymin(1,3) << endl;
    cout << mymin(3,1) << endl;    
    cout << mymin(10, 9) << endl;

    /* the use of inline function makes the code the following:
    cout << 1 > 3 ? 3 : 1 << endl;
    cout << 3 > 1 ? 1 : 3 << endl;    
    cout << 10 > 9 ? 9 : 10 << endl;   
    */
}