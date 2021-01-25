#include <iostream> 
using namespace std;

class NewClass {
    public:
        int id;
        string name;
        //prototype declearation
        void print_name();

        // definition interior. 
        void print_id() {
            cout << id << endl;
        }
};

void NewClass::print_name() {
    cout << name << endl;
}  

int main() {
    NewClass nc;
    nc.id = 10;
    nc.name = "new class";
    cout << nc.id << ' ' << nc.name << endl;
    nc.print_name();
    nc.print_id();
    //cout << nc.get_name() << endl; // this generates a lot of error message that are difficult to grasp what it means.
}