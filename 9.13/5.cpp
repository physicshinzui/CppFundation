#include <iostream> 
#include <typeinfo>
using namespace std;

int main() {
    //new creates a new object using that memory and returns a pointer possessing the address.
    cout << typeid(new int).name() << endl;

    // we can pass it to a variable of a pointer:
    int* ptr{new int};
    // Naturally, we can substitute the value at that address:
    *ptr = 7;
    cout << *ptr << endl;

    // Also, we can initialise it like (from C++11)
    int *ptr2{new int {10} }; //uniform initialisation
    int *ptr3{new int (9) };  //direct initialisation
    cout << *ptr2 << endl;
    cout << *ptr3 << endl;

    //We can make a pointer free by "delete":
    delete ptr2; //ptr2 is assumed to be decleared before.
    ptr2 = 0;   // null pointer is set. Use nullptr in C++11 
    //Note that "delete" does not mean to delete a varialbe, rather mean to make the memory free.
    //One may think what to make memory free mean. It means that     

}