#include <iostream>

int main() {
    std::cout << "Enter your height (in cm): ";
    int x{};
    std::cin >> x;
 
    if (x > 140)
        std::cout << "You are tall enough to ride.\n";
    else
        std::cout << "You are not tall enough to ride.\n";
        std::cout << "Too bad!\n"; // focus on this line. this is always executed!
 
    return 0;
}