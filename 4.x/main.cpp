#include <iostream>

void input(double &x, double &y, char &op) {
    std::cout << "Give two double numbers:";
    std::cin >> x >> y;
    std::cout << "\nGive one operator (*, /, +, or -):";
    std::cin >> op;
    switch (op) {
        case '*':
            break;
        case '/':
            break;
        case '+':
            break;
        case '-':
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
            break;
    }
}

double calculate(double x, double y, char op){
    switch (op){
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 1.0;
    }
}

int main() {
    //input two double numbers by user, and ask user to input one operator (*, /, +, or -)
    double x, y;
    char op;
    input(x, y, op);
    
    //compute the operation for the two double numbers. 
    int ans = calculate(x, y, op);
    //print the result. 
    std::cout << x << op << y << '=' << ans << std::endl;

    return 0;
}