#include <iostream> 
#include <string> 

class Person {
    private:
        int _age {};
        std::string _name{};
    public:
        Person(std::string name = " ", int age = 0) : 
            _name{name}, _age{age} 
        {
        } 

        int getAge() {
            return _age;
        }

        std::string getName() {
            return _name;
        }

        void setName(std::string name) {
            _name = name;
        }
};

class BaseballPlayer : public Person {
    private:
        double _batting_av{};
        int _home_runs{};

    public:
        BaseballPlayer(double mean = 0.0, int n_hr = 0) : 
            _batting_av{mean}, _home_runs{n_hr} 
        { 
        } 
        
        void printNameBAvHRs() {
            std::cout << getName() << ":" << _batting_av << ", " << _home_runs << std::endl;
        }
};

class Employee : public Person {
    private: 
        double _hourlySalary{};
        long _employeeID{};

    public:
        Employee(double hourlySalary = 0.0, long employeeID = 0) : 
            _hourlySalary{hourlySalary}, _employeeID{employeeID}
        {
        }
        void printNameAndSalary() {
            std::cout << getName() << ":" << _hourlySalary << " yen" << std::endl;
        }
};


int main() {
    BaseballPlayer matsui{0.367, 25};
    matsui.setName("MATSUI");
    matsui.printNameBAvHRs();

    Employee p1{1000.5, 5};
    p1.setName("Bob");
    p1.printNameAndSalary();
    
}