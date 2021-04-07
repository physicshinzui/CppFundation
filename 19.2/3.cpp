#include <iostream> 
#include <typeinfo>

double average1(const double *array, int length) {
    double sum { 0.0 };
    for (int i { 0 }; i < length; ++i) {
        sum += array[i]; // array[index] == *(array + index)
    }
    sum /= length;
    return sum;
}

double average2(const double *array, int length) {
    double sum { 0.0 };
    for (int i { 0 }; i < length; ++i) {
        sum += *(array + i); //moving an address to the next one, dereference the pointer
    }
    sum /= length;
    return sum;
}

int main() {
    double array[] {1.5,2.5,3.5,4.5,5.5};
    std::cout << average1(array, 5) << std::endl;
    std::cout << average2(array, 5) << std::endl;
}