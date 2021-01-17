#include <iostream> 
using namespace std;

int main() {
    int x = 1.1;
    cout << "x = " << x << endl;
    // int y = {1.1}; //generates a warning. 
    // cout << "y = " << y << endl; //copy initialization

    // int z {1.2}; //generates a warning. 
    int xx[3] = {1,2,3};
    cout << xx[0] << xx[1] << xx[2] << endl;
}