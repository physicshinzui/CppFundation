#include <iostream> 
#include <vector>

class Calculator {
    public:
        using num_t = int; // if you want to get double, just rewrite here! 
        std::vector<num_t> m_history{}; // Zero length vector

        num_t add(num_t a, num_t b) {
            auto result {a+b};
            m_history.push_back(result);    
            return result;
        }
};

int main() {
    Calculator calculator{}; // the instance name can be the same as the class name, but I think it's not recommended.
    calculator.add(1,3);
    calculator.add(3,4);
    for (Calculator::num_t result : calculator.m_history) {
        //^ must be the original class name
        std::cout << "Result = " << result << ", " << sizeof(result) << " bytes" << std::endl;
        //^ you can check if `result` is double or int via sizeof(result)
    }    
}