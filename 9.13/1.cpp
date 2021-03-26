#include <iostream> 
using namespace std;

void printArray(int* array, int n) {
    for (int i{0}; i < n; i++) {
        cout << *(array + i) << " ";
    }
    cout << "\n";
}

void printArrayCopy(int array[], int n) {
    cout << "1st address (in function) = " << &array[0] << endl;
    for (int i{0}; i < n; i++) {
        cout << array[i] << " "; 
    }
    cout << "\n";
}

int main() {
    //static memory allocation 
    int x; 
    int array[]{1,2,3,6};
    cout << "1st address (in main)     = " << &array[0] << endl;
    //dynamic memory allocation
    printArray(array, 4);
    printArrayCopy(array, 4);
  
}