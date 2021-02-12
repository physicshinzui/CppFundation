#include <iostream> 

int main() {
    int a, b; 
    unsigned int c, d; 
    std::cout << "Signed int size   = " << sizeof(int)          << " byte" << std::endl;
    std::cout << "Unsigned int size = " << sizeof(unsigned int) << " byte" << std::endl;

    a = 2100000000;
    b = 2200000000;//Overflow
    std::cout << "a = " << a  << std::endl;
    std::cout << "b = " << b  << std::endl; //Overflow

    c = 3000000000;
    d = 5000000000; //Overflow
    std::cout << "c = " << c  << std::endl;
    std::cout << "d = " << d  << std::endl; //Overflow
    

}