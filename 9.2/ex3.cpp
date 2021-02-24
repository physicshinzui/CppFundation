#include <iostream> 
using namespace std;

void passValue(int x) {
    x = 10; //locally changed! the argument is copied.
}

void passArray(int arr[3]) {
    arr[0] = 1;  //Globally changed!! the argument is not copied. 
    arr[1] = 2;
    arr[2] = 3;
}

void passArrayConst(const int arr[3]) {
    //to ensure that the array argument isn't modified, you can put const modifier. 
    //the following does thus cause a compile error. 
    // arr[0] = 1;  
    // arr[1] = 2;
    // arr[2] = 3;
}

int main() {
    int a = 1; 
    int array[3] { };
    cout << "Before" << endl;
    cout << "passed by value: " << a << endl;
    cout << "passed by array: "; 
    for (int i = 0; i < 3; ++i) {
        cout << array[i] << ' ';
    }
    cout << endl;

    passValue(a);
    passArray(array);

    cout << "After" << endl;
    cout << "passed by value: " << a << endl;
    cout << "passed by array: "; 
    for (int i = 0; i < 3; ++i) {
        cout << array[i] << ' ';
    }
    cout << endl;

}