#include <iostream>

class Cat {
    private:
        int _age;

    public:
        Cat(int age) : _age{age} {
        };

        friend bool operator> (const Cat &c1, const Cat &c2) {
            return (c1._age > c2._age); 
        }

        int get_age() {return _age;};

};

template<typename T>
const T &max(const T &x, const T &y) {
    return (x > y) ? x : y;
}

int main() {
    Cat mike{10};
    Cat taro{5};
    Cat bigger {max(mike, taro)};
    std::cout << bigger.get_age() << std::endl;

}