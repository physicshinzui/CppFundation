#include <iostream>
using namespace std;
int main () {
    int* arr1 = new int[10]; // This is how to define a dynamic array. 
    cout << arr1[0] << endl;
    delete [] arr1; //make the memory space free. This command is for an array, not others.  
}