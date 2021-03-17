#include <iostream>
#include <iterator>
#include <algorithm>

bool isOver5(int x) {
    if (x >= 5) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int array[] {1,2,3,4,5,6,7,8};
    auto num{ std::count_if(std::begin(array), std::end(array), isOver5) };
    //^ auto 
    std::cout << num << std::endl;
}