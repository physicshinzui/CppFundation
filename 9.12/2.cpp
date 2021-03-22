#include <iostream>
#include <vector>
#include <iterator>

int main()
{   
    // A case of integer type: a pointer to an array that has x (= 10)
    int array[]{1,2,3};
    const int* ptr{array};
    std::cout << "Points to " << *(ptr + 0) << std::endl;
    std::cout << "Points to " << *(ptr + 1) << std::endl;
    std::cout << "Points to " << *(ptr + 2) << std::endl;
    //std::cout << "Array length  : " << std::size(array) << std::endl;

    // A case of char type: A pointer to a char variable 
    char name[] {"Bob"};
    std::cout << "Length = " << std::size(name) << std::endl;
    const char* nptr{name};
    std::cout << nptr << '\n';
 
    return 0;
}