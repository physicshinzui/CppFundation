#include <iostream> 

int main() {

    unsigned int count {10};
    //count from 10 to 0;
    while (count >= 0) {
        if (count == 0){
            std::cout << "blastoff" << std::endl;
        }
        else {
            std::cout << count << std::endl;
        }
        count--;
        if (count > 100) {
            std::cout << "Oops, an unexpected value was detected: " << count << std::endl;
            break;
        }

    }
    return 0;
}