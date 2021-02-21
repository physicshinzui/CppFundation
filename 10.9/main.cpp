#include <iostream> 

int foo() {
    return 10;
}
double boo() {
    return 11.1;
}

int main() {
    std::cout << foo << std::endl;
    std::cout << boo << std::endl;
    
}