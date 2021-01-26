#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if (x == 1) {
        goto end;
    }
    else {
        std::cout << "Not 1" << std::endl;
        return 0;
    }

    end:
        std::cout << "Go to end" << std::endl;
        
}