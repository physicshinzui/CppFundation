#include <iostream>
#include <algorithm> 
#include <cstdlib>
using namespace std; 

const int INTARRAY_SIZE = 100;

class IntArray {
public:
    IntArray();
    int Get(int num);
    void Set(int num, int value);
    void CheckIndex(int num);

private:
    int _array[INTARRAY_SIZE];
};

IntArray::IntArray() {
    fill_n(_array, INTARRAY_SIZE, 0);
}

int IntArray::Get(int num) {
    CheckIndex(num);
    return _array[num];
}

void IntArray::Set(int num, int value) {
    _array[num] = value;
}

void IntArray::CheckIndex(int num) {
    if (num < INTARRAY_SIZE && num >= 0) {
        //ok
    } else {
        cout << "Index is invalid. -> " << num << endl;
        exit(EXIT_FAILURE);   
    }
}

int main() {
    IntArray arr;
    cout << "Initial: " << arr.Get(0) << endl;
    arr.Set(0, 10);    
    cout << "Reassigned: " <<  arr.Get(0) << endl;

    cout << arr.Get(100) << endl; //returns "Index is invalid"
    //cout << arr._array[100] << endl; // if _array is not private, it is accessible. 

}