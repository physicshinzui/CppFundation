#include <iostream> 

int* addone(int num) {
    num += 1;
    return &num; // this causes warning. 
} // num is broken here, so *num is not accessbile anymore. It's a dangiling pointer. 

int main() {
    int x = 5;
    int* xx = addone(x); //segmentation fault often occurs.
    std::cout << *xx << std::endl; 
}