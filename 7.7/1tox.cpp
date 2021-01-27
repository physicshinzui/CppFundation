#include <iostream> 

int main() {
    int x;
    std::cin >> x;
    int i = 0; 
    while (i <= x) {
        std::cout << i << ' ';
        i++;
    }
    std::cout << std::endl;
}