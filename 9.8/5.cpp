#include <iostream>
#include <typeinfo>
int main()
{
    int value{ 5 };
    std::cout << &value << std::endl; // prints address of value
    std::cout << value << std::endl; // prints contents of value
    
    int* ptr{ &value }; // ptr points to value
    std::cout << ptr << std::endl; // prints address held in ptr, which is &value
    std::cout << *ptr << std::endl; // Indirection through ptr (get the value that ptr is pointing to)
}

/*
address
5
address
5
*/