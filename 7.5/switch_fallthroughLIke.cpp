#include <iostream> 

int main() {
    char c;
    std::cout << "Type a single letter:";
    std::cin >> c;
    switch (c) {
        case 'a':
        case 'i':
        case 'u':
        case 'e':
        case 'o':
            std::cout << "vowel" << std::endl;
            return 0;
        default:
            std::cout << "not vowel" << std::endl;
            return 0;

    }
}