#include <iostream> 

int main() {
    int var1;
    std::cout << "Input (int):";
    std::cin >> var1;
    const int myValue {var1};   // called runtime constant
    constexpr double gravity {9.8}; // called compile-time constant

    return 0;
}