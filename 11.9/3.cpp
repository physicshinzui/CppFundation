#include <iostream>
using namespace std;

class Person {
    private:
        int _id;
    
    public:
        Person(int id) : _id{id} { 
            cout << "The constructor was called: it has this id " << id << endl;
        }

        ~Person() {
            cout << "The destructor was called because this object has been due." << endl;
        }

        int get_id() {
            return _id;
        };
};

int main() {
    Person me{31};
    cout << me.get_id() << endl; 
}