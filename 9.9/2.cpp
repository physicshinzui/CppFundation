#include <iostream> 
using namespace std;

// void func(int array[]) // this is identical to below, but (int* array) is kinda prefereable because of the explicit handling of a pointer. 
void func(int* array, int N) {
    cout << "Pointer size         : " << sizeof(array) << endl;
    cout << "The 1st elem address : " << array << endl; 
    for (int i{0}; i < N; i++) {
        cout << array[i] << endl;
    }
}

int main() {
    int array[] {1,2,3,4,5,6}; // 4 byte * 6 = 24 bytes 
    int N = sizeof(array) / sizeof(*array);
    cout << "Array length      : " << N << endl;
    cout << "Array size (byte) : " << sizeof(array) << endl;
    func(array, N);
    //array automatically decays to a pointer, so the form of `func(int* array)` is mandatory. 
    // `func(int array)` is not accepted, causing a compile error.

}