#include <iostream>
#include <typeinfo>

int main() {
    int var{4};
    std::cout << var << std::endl;
    std::cout << &var << std::endl;
    std::cout << typeid(var).name() << std::endl;
    std::cout << typeid(&var).name() << std::endl;
}