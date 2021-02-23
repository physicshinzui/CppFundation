#include <iostream>
using namespace std;

int main() {
    //pain way to initialise (actually this is assignment, not initialisation)
    int arr[3]{};
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    //better way to initialise (initialiser list)
    int arr2[3] {1,2,3};
    cout << arr2[0] << arr2[1] << arr2[2] << endl;
    int arr3[3] {10,20};
    cout << arr3[0] << arr3[1] << arr3[2] << endl;

    //initialisation by zero or empty string
    int arr4[3]{ };
    double arr5[3] { };
    string arr6[3] { };

    // Omitted length: the followings are equivalent.
    int arr7[5] {5,6,7,8,9};
    int arr8[] {5,6,7,8,9};
    cout << arr8[0] << "..." << arr8[4] << endl;
    cout << arr7[0] << "..." << arr7[4] << endl;
}