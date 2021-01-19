#include <iostream> 
#define TOM

int main() {
#ifdef TOM
    std::cout << "TOM has been defined" << std::endl;
#endif

#ifdef BOB
    std::cout << "BOB has been defined" << std::endl;
#endif

#ifndef ME
    std::cout << "ME has not been defined yet." << std::endl;
#endif

#if 0
    std::cout << "This part is not complied" << std::endl;
#endif
}
