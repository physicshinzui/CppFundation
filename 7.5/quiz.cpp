#include <iostream> 

void calculate(int x, int y, char op) {
    
    switch (op) {
        case '+':
            std::cout << x + y << std::endl;
            break;
        case '-':
            std::cout << x - y << std::endl;
            break;
       case '*':
            std::cout << x * y << std::endl;
            break;
        case '/':
            std::cout << x / y << std::endl;
            break;
        case '%':
            std::cout << x % y << std::endl;
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
            break;
    }
}

int main() {
    int x, y;
    char op;
    std::cout << "Give two integers:";
    std::cin >> x >> y;
    std::cout << "Give an operator (+, -, *, /, %):";
    std::cin >> op;

    calculate(x, y, op);
}