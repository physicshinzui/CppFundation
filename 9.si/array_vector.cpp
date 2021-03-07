#include <iostream>
#include <vector>
#include <array>
using namespace std;

template <typename T>
void print(T array) {
    for (auto x : array) {
        cout << x << endl;
    }
}

int main() {
    vector<int> v(3,0);
    array<int, 3> arr{ };
    int darr[3];
    cout << "--- compile-time size is shown ---" << endl;
    cout << "std::vector size: " << sizeof(v)   << " bytes" << endl;
    cout << "std::array  size: " << sizeof(arr) << " bytes" << endl;
    cout << "array  size     : " << sizeof(darr) << " bytes" << endl;
    cout << "-> std::array is more memory efficient than std::vector" << endl;

    //vector can be appended afterwards
    v.push_back(10);
    print<vector<int>>(v);
    //but array can't be. 
    print<array<int,3>>(arr);
}