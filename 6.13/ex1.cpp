#include <iostream> 

int main() {
    typedef double distance_t;
    using distance_t = double;
    int x{10};
    distance_t d{10.9};
    std::cout << d << ' ' << sizeof(d) << std::endl;
    std::cout << x << ' ' << sizeof(x) << std::endl;
}