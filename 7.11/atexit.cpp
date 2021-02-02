#include <iostream>
#include <cstdlib>

void cleanup() {
    std::cout << "clean up (resistered firstly)" << std::endl;
}

void cleanup2() {
    std::cout << "clean up (resistered secondly)" << std::endl;
}

int main() {
    // the functions are called in an reverse-registered order (i.e., cleanup2 -> cleanup) if the program tereminates. 
    std::atexit(cleanup);
    std::atexit(cleanup2);

    std::cout << "Printed here" << std::endl;
    std::exit(0); //even if this is commented out, "clean up" will be display when main terminates.
    std::cout << "Not printed here" << std::endl;

    return 0; 
}