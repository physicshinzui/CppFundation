#include <iostream>
using namespace std;
int main() {
    int array[]{ 1,2,3,4,5 };
    int N{ sizeof(array)/sizeof(*array) };

    //Two ways of iterating an array: by indexing and by pointer addition
    for (int i{0}; i < N; i++) {
        cout << " Array[" << i << "] is " << array[i] << endl;
        cout << "ptrArr[" << i << "] is " << *(array + i)<< endl;   
    }
}

