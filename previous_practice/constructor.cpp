#include <iostream> 
using namespace std;

class Dog {
    public:
        int age;
        int sex;

        Dog();
        void bark();

};

Dog::Dog() {
    age = 0;
}

void Dog::bark(){
    cout << "wanwan" << endl;
}

int main() {
    Dog pochi;
    cout << "Age: " << pochi.age << endl;
    pochi.bark();
}