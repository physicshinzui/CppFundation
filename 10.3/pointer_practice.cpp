#include <iostream>
#include <vector>

void foo(int *ptr) {
    *ptr = 5; //* says to treat ptr like a normal variable. 
}

void hoge(int &ptr) {
    ptr = 10; 
}

void foo2(int *&ptr) {
    *ptr = 20; 
}

void printArray(int *array, int num) {
    for (int i = 0; i < num; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}

    int main() {
        int x = 0; 
        std::cout << x << std::endl;
        foo(&x);
        std::cout << x << std::endl;
        hoge(x);
        std::cout << x << std::endl;

        int *xx = &x;
        foo2(xx);
        std::cout << x << std::endl;
   
    int arr[4] = {1,2,3,4};
    printArray(arr, 4);

}