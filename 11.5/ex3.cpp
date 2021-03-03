#include <iostream> 
using namespace std;

class Cat {
    private:
        string _name;
        int _age;
    public:
        Cat(string name = "Unknown", int age = 0) {
            _name = name;
            _age  = age;
        }
        //if you want to initialize this class only by age, you must declare the following constructor.
        Cat(int age) {
            _age = age;
        }
        
        string getName() {
            return _name;
        }
        int getAge() {
            return _age;
        }
};

int main() {
    Cat cat1{"Mike", 10};
    cout << cat1.getName() << cat1.getAge() << endl;
    Cat cat2{"Tama"};
    cout << cat2.getName() << cat2.getAge() << endl;

    Cat cat3{5}; // Cat(int age) is called
    cout << cat3.getName() << cat3.getAge() << endl;
}