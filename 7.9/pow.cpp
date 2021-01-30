#include <iostream> 

int pow(int base, int exponent) {
    int total {1};
    for (int count {}; count < exponent; count++) {
        total *= base;
    }
    return total;
}

int main() {
    std::cout << pow(2, 10) << std::endl;
}