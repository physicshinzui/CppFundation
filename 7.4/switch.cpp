#include <iostream> 

void printNumber(int num){
    switch (num) {
        case 1:
            std::cout << "this is 1" << std::endl;            
            //break;
        case 2:
            std::cout << "this is 2" << std::endl;            
            //break;
            [[fallthrough]];            
        default:
            std::cout << "not 1 and not 2" << std::endl;
            break;
    }
    std::cout << "Outside switch" << std::endl;            
    

}

int main() {
    printNumber(1);
}
