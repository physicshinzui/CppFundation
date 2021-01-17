#include <iostream> 
using namespace std;

struct NewType {
   string name;
};

int main () {
    NewType nt;
    nt.name = "i am a pen.";
    cout << nt.name  << endl;
}