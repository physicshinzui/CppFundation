#include <iostream> 
using namespace std;

struct Students{
    int score {};
    int age {};
};

int main() {
    Students stud[5]{};
    cout << stud[0].score << endl;
    cout << stud[1].score << endl;
    stud[0].score = 10;
    stud[1].score = 20;
    cout << stud[0].score << endl;
    cout << stud[1].score << endl;
}