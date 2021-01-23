#include <iostream> 
#include "io.h" // is this needed? 
int readNumber() {
    int x {};
    std::cin >> x;
    return x;
}

void writeAnswer(int x) {
    std::cout << x << std::endl;
}
