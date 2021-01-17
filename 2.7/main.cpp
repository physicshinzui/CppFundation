#include <iostream> 
using namespace std;

int add(int x, int y); // must be decleared here to tell the existence of this function add elsewhere. 

int main() {
    cout << "1+2=" << add(1, 2) << endl;
}


