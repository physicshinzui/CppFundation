#include <iostream>

int main() {
    for (int i{0}, j{9}; i < 10; ++i, --j) {
        std::cout << i << ' ' << j << std::endl;
    }
}