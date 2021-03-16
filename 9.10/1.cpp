#include <iostream> 
using namespace std;

void changeArray(int* array) {
    *array = 10;
}

int main() {
    int array[] {1,2,3,4,5,6}; // 4 byte * 6 = 24 bytes 
    changeArray(array);
    cout << *array << endl;
}