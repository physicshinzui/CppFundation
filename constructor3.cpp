#include <iostream>
using namespace std;

class Cat {
    public:
        int age;
        string voice;
        Cat();
        Cat(int num, string str);
        void barking();
};

Cat::Cat() {
    age = 0;
    voice = "nya nya";
}
Cat::Cat(int num, string str) {
    age = num;
    voice = str;
}
void Cat::barking() {
    cout << voice << endl;
}

int main() {
    Cat mike;
    cout << mike.age << endl;
    Cat tama();
    cout << tama.age << endl;
}