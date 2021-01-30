#include <iostream> 

void show() {
    for (int i{10}; i >= 0; i -= 2) {
        std::cout << i << std::endl;
    }
}

int main() {
    show();
}