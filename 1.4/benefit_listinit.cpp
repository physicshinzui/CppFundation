#include <iostream> 
using namespace std;

int main() {
    int x = 1.1;
    cout << "x = " << x << endl;
    int y = {1.1};
    cout << "y = " << y << endl; //copy initialization

    //int y {1.1}; //causes an error
}