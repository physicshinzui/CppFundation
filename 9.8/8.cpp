#include <iostream>
#include <cstddef> //preprocessor macro for NULL. 
#include <typeinfo>
using namespace std;

int main() {
    int* ptr1;
    cout << ptr1 << endl; //ptr1 points to somewhere. 
    
    int* ptr2{0}; //a null pointer
    cout << ptr2 << endl; //ptr2 does not point to anywhere. indirection operator causes undefined behaviour.
    
    double* ptr3{NULL};    //a null pointer via <cstddef> 
    cout << ptr3 << endl;  //ptr3 contains 0, by default.
    //as of C++11, nullptr

    int* ptr4{nullptr};
    cout << ptr4 << endl;
    cout << typeid(nullptr).name() << endl;
    
}