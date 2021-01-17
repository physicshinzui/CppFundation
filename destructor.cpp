#include <iostream>
#include <cstdlib>
using namespace std;

//const int INTARRAY_SIZE = 100;

class InArray {
public:
    // Dynamic allocation
    InArray(int num); // constructor must not be in private? If it does, an error was yielded. 30.12.2020
    // ~InArray();
    int Get(int num);
    void Set(int num, int value);

private:
    void CheckArray(int num);
    int* _array; //dynamic array in C
    int  _size;  //size of the array.
};

InArray::InArray(int size){
    _size = size;
    _array = new int[_size]; // new int[] I did not know this way to declare a new array! 30.12.2020
    fill_n(_array, _size, 0); //from std::cstdlib
    cout << "Constructor was called" << endl;
}
// InArray::~InArray(){
//     delete [] _array;
// }

int InArray::Get(int num) {
    CheckArray(num);
    return _array[num];
}

void InArray::Set(int num, int value) {
    CheckArray(num);
    _array[num] = value;
}

void InArray::CheckArray(int num) {
    if (num >= 0 && num < _size) {
        cout << "Correct Access" << endl;
    } else {
        cout << "Incorrect access" << endl;
        exit(EXIT_FAILURE);
    }
    
}

int main() {
    InArray arr(1);
    cout << arr.Get(0) << endl;
    //cout << arr.Get(101) << endl;
    arr.Set(0, 1212);
    cout << arr.Get(0) << endl;
    InArray arr2(2);
    //cout << arr2.Get(0) << endl;
    //cout << addressof(arr) << ' ' << addressof(arr2) << endl;
}