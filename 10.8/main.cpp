#include <iostream>
#include "foo.h"

void print(char c) {
    std::cout << c << std::endl;
}
void print(std::string s) {
    std::cout << s << std::endl;
}

int main() {
    print('a'); 
    print("This is string"); 
    print(); 
}   