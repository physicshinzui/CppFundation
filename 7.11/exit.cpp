#include <iostream>
#include <cstdlib>

void cleanup() {
    std::cout << "clean up" << std::endl;
}

int main() {

    std::cout << "Printed here" << std::endl;
    cleanup();
    std::exit(0);
    std::cout << "Not printed here" << std::endl;

    return 0;
}