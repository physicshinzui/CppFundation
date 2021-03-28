#include <iostream> 
#include <typeinfo>
using namespace std;

//Both are the same, aren't they? 
//And arr[] is considered a pointer as typeid(arr).name() sugggests.
void print(int arr[]) {
//void print(int* arr) {
    cout << "Type (arr)                      : " << typeid(arr).name() << endl;
    cout << "1st address                     : " << arr << endl;
    // Note that `int arr[]` is a pointer. 
    cout << "The address of the pointer arr[]: " << &arr << endl; 
    cout << "1st value of arr                : " << *arr << endl;           
}

int main() {
    int arr[]{1,3,4};
    cout << arr << endl;
    cout << &arr[0] << endl;
    print(arr);

    // btw, an array can be pointed by several pointers. 
    int* ptr1{arr};
    int* ptr2{arr};
    cout << ptr1 << endl;
    cout << ptr2 << endl;

}