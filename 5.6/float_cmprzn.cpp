#include <iostream>

int main()
{
    double d1{ 100.0 - 99.99 }; // should equal 0.01
    double d2{ 10.0 - 9.99 }; // should equal 0.01
    std::cout << setprecision(10);
    std::cout << d1 << std::endl;
    std::cout << d2 << std::endl;
    
    if (d1 == d2)
        std::cout << "d1 == d2" << '\n';
    else if (d1 > d2)
        std::cout << "d1 > d2" << '\n';
    else if (d1 < d2)
        std::cout << "d1 < d2" << '\n';
    
    return 0;
}