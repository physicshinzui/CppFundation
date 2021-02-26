#include <iostream> 
#include <iterator>

int main() {
    int scores[] { 10, 20, 30, 40, 50};
    int studentMax = std::size(scores);

    for (int student { }; student <= studentMax; ++student) {
        std::cout << student << ':' << scores[student] << std::endl;
    }
    
    std::cout << std::endl;

    for (int student { }; student < studentMax; ++student) {
        std::cout << student << ':' << scores[student] << std::endl;
    }
} 