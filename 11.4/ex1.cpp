#include <iostream> 

class MyString {
    public:
        char *m_string; //dynamically allocated
        int m_length;   // 
};

int main() {
//    MyString str {'a', 3};
    char *a;
    *a = 'a'; //how can i handle dynamic allocation? 
    std::cout << a << std::endl;
}