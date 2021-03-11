#include <iostream> 
using namespace std;

class Smth {
    private:   
        int _var;

    public:
        Smth(int var = 0) : _var{var} { }

        //(1) mistake 1: I did not give parameters in this constructor even though the class takes an argument
        // Smth() : _var{0} { }
            // ^ Here!!

        //(2) mistake 2: 
        // Smth(int _var) : _var{0} { }
                  //^Wierd! a private member is taken by this constructor. 
        void print() {
            cout << _var << endl;
        }
};

int main() {
	Smth ss{11};
    ss.print();
	return 0;
}