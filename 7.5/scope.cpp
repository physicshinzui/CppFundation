#include <iostream> 

int main() {
    int num;
    std::cout << "Type an integer:";
    std::cin >> num;
    switch (num) {
        //std::string s = "Declared";
        
        case 1:
            std::cout << "one!" << std::endl;
            return 0;
        default:
            std::cout << "not one!" << std::endl;
            return 0;
        //std::cout << s << std::endl;
    }
}