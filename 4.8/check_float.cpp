#include <iostream> 
#include <typeinfo>
#include <iomanip> 

template <class T> 
void checkType(T x) {
    std::cout << std::setprecision(5);
    std::cout << x << " : " << typeid(x).name() << std::endl;
}

int main() {
    float x{5.0f};
    double y{6.0};
    long double z{7.0};
    checkType<float>(x);
    checkType<double>(y);
    checkType<long double>(z);

}