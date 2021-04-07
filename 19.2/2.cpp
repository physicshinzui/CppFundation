#include <iostream> 
#include <typeinfo>

template <typename T> 
T average(const T *array, int length) { //*array means that a pointer of an array is taken.
    // return the average number of the elements in an array
    std::cout << "Data type (array): " << typeid(array).name() << std::endl;
    T sum { 0 };
    for (int i { 0 }; i < length; ++i) {
        sum += array[i];
    }
    sum /= length;
    return sum;
}

int main() {
    int arr1[] {1, 2, 3, 4};
    double arr2[] {3.12, 3.45, 9.23, 6.34};

    //the pointer pointing to the first address is passed to a function.
    std::cout << average(arr1, 4) << std::endl;
    std::cout << average(arr2, 4) << std::endl;  

    //the following must be the same as above.  
    std::cout << average(&arr1[0], 4) << std::endl;
    std::cout << average(&arr2[0], 4) << std::endl;

    //Doing this is not allowed, &arr1 indicatest the address of the pointer pointing to the first address.
    //std::cout << average(&arr1, 4) << std::endl;
    
}