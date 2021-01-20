#include <iostream>
#include "add.h"

//int add(int x, int y); // forward declaration using function prototype

int main(){
    std::cout << "1 + 2 = " << add(1,2) << std::endl;
    std::cout << "3 * 2 = " << mult(3,2) << std::endl;
}