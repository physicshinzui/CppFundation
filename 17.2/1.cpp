#include <string> 
#include <iostream>
class Person {
    public:
        int _age{};
        std::string _name{};

        Person(const std::string& name = " ", int age = 0) : _name {name}, _age {age} { }

        const std::string& getName() {return _name;}
        int getAge(){return _age;}
};

class BaseballPlayer : public Person {
    public:
        double _batting_av{};
        int _home_runs{};
        BaseballPlayer(double mean = 0.0, int n_hr = 0) : _batting_av{mean}, _home_runs{n_hr} { } 
};

int main() {
    using std::cout; 
    using std::endl;
    Person me("shinji", 31);
    cout << me.getName() << " : " << me.getAge() << endl;
    BaseballPlayer player1(0.386, 14);
    player1._name = "ichiro";
    player1._age  = 40;
    
    cout << player1.getName() << ", " << player1.getAge() << " : " << player1._batting_av << ", " << player1._home_runs << endl;
}