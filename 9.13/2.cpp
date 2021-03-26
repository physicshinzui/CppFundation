#include <iostream> 
using namespace std;

void printArray(int array[], int n) {
    cout << "---In function---" << endl;
    cout << "&array    = " << &array << endl;
    cout << "&array[0] = " << &array[0] << endl;
    for (int i{0}; i < n; i++) {
        cout << array[i] << " "; 
    }
    cout << "\n";
}

int main() {
    int array[]{1,2,3,6};
    cout << "---In main---" << endl;    
    cout << "&array    = " << &array << endl;
    cout << "&array[0] = " << &array[0] << endl;
    printArray(array, 4);
}