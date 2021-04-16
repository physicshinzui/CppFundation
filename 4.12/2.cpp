#include <iostream> 
#include <iomanip>
#include <string> // allow to use std::string

int main()
{
    std::cout << "Input 1 or 2" << std::endl;
    int choice{};
    std::cin >> choice;

    std::cout << "Enter your name" << std::endl;
    std::string name {};
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello, " << name << ", you picked " << choice << std::endl;
    return 0;
}

// "string": a collectio of sequential characters.