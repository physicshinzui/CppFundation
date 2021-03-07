#include <iostream> 
using namespace std;

class Cat {
    private:
        string _name;
        int _age;
        char _gender;

    public:
         Cat(string name, int age, char gender) {    
            //they are all assignments, not initialization, 
            //which is defined as the first decleration of a variable with a value.  
            _name   = name;
            _age    = age;
            _gender = gender;            
        
        };
        void print() {
            cout << "Name  : " << _name << endl;
            cout << "Age   : " << _age << endl;
            cout << "Gender: " << _gender << endl;
        }
};

class Dog {
    private:
        string _name;
        int _age;
        char _gender;

    public:
        //member initilizer list instead of assignments.
        Dog(string name, int age, char gender) : _name{name}, _age{age}, _gender{gender} 
        {
        //No need for assignment here.
        };
        void print() {
            cout << "Name  : " << _name << endl;
            cout << "Age   : " << _age << endl;
            cout << "Gender: " << _gender << endl;
        }
};

class Human {
    private:
        //Note! _name is const, which does not allow us to do assignment.
        const string _name;
        int _age;
        const char _gender;

    public:
        //member initilizer list instead of assignments.
        //though const _name does not allow assignments, it allows initialization, which is done here! 
        Human(string name, int age, char gender = 'f') : _name{name}, _age{age}, _gender{gender} 
                                                  //^ const _name is initialized.  
        {
        //No need for assignment here.
        };
        void print() {
            cout << "Name  : " << _name << endl;
            cout << "Age   : " << _age << endl;
            cout << "Gender: " << _gender << endl;
        }    
};

int main() {
    Cat cat1{"mike", 10, 'f'};
    cat1.print();
    Dog dog1{"pochi", 5, 'm'};
    dog1.print();
    Human human1{"Bob", 25, 'm'};
    human1.print();
    Human human2{"Lisa", 22};
    human2.print();
}
