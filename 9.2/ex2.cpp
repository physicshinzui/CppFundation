#include <iostream>
using namespace std;

//0,1,... are assigned to each name automatically. 
namespace StudentNames {
    enum StudentNames {
        jack, // 0
        nami, // 1
        bob,  // 2
        max_students // 3
    };
}

//note : unlike enum, enum class does not convert names into integers implicitly.  
enum class StudentSomething {
    shin, 
    masu, 
    tom,
    max_student
};

int main() {
    int testScores[StudentNames::max_students]{};
    testScores[StudentNames::nami] = 100;
    cout << testScores[StudentNames::nami] << endl;
    cout << testScores[1] << endl;
    cout << testScores[StudentNames::bob] << endl;
    cout << StudentNames::bob << endl;
    //bob = 10; Error. can'be assigned.
    
    return 0;
}