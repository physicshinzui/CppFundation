#include <iostream> 
#include <vector>

// pass by reference. 
void printArray(std::vector<int>& vec) {
    for (int i = 0; i < (int)vec.size(); i++) {
        std::cout << vec.at(i) << ' ';
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> A(100, 10);
    std::cout << sizeof(A) << " bytes\n";
    std::cout << sizeof(bool) << " bytes\n";
    std::cout << sizeof(int) << " bytes\n";
    std::cout << sizeof(float) << " bytes\n";
    std::cout << sizeof(double) << " bytes\n";
    printArray(A);
}