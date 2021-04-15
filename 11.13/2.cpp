#include <iostream>

//Practice for static member variables
class Something
{
public:
    //int m_value{1}; //without static
    static int s_value; //with static
};

int Something::s_value{1};

int main()
{
    Something first; 
    Something second;

    first.s_value = 2;
    
    std::cout << first.s_value << '\n';
    std::cout << second.s_value << '\n';

    return 0;
}