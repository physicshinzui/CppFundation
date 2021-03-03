#include <iostream> 

class Object {
    std::string _name;

    public:

        Object(std::string name = "Default name") {
            _name = name;
        }
        std::string getName() {
            return _name;
        };

};

int main() {
    Object obj1;
    std::cout << obj1.getName() << std::endl;
    Object obj2  {"Natsure"};
    std::cout << obj2.getName() << std::endl;

    //An attempt to copy an object to obj3. But practically this would be less efficient, so it's not recommended. 
    Object obj3 = obj2; //copy 
    std::cout << obj3.getName() << std::endl;
}