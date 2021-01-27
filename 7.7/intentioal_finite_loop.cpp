#include <iostream> 

int main() {

    while (true) {
        std::cout << "Loop again? [y/n]:";
        char c{};
        std::cin >> c;
        if (c == 'n') {
            break;
        }

    }
    std::cout << "Done" << std::endl;
}