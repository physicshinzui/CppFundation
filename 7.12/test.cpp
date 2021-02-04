#include <iostream> 

int compare(int a, int b) {
    // I assume a must be equal to b. if not, this function returns 1
    if (a > b) 
        return 1;
    else if (a < b) 
        return 1;
    else 
        return 0;
}

int testCompare() {
    if (compare(1,2) == 1) return 1;
    if (compare(2,0) == 1) return 2;
    if (compare(1,4) == 1) return 3;

    return 0;
}


int main() {
    std::cout << testCompare() << std::endl;
}