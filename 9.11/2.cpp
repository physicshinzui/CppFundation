#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main() {
    int array[]{ 1,2,3,4,5 };
    int N{ sizeof(array)/sizeof(*array) };
    for (int i{0}; i < N; i++) {
        cout << "Array[" << i << "] is at " << &array[i] << endl;
    }

    //irrelevant consideration below to this chaptor. 
    vector<int> vec(5);
    std::array<int, 5> arr;
    cout << sizeof(array) << " , " << sizeof(arr) << ", " << sizeof(vec) << endl;

 int x{1};
 int* ptr{&x};
cout << ptr  << endl;
 cout << ptr + 1 << endl;

}

