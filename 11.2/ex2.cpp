#include <iostream> 
using namespace std;

struct dateStruct {
    int day { };
    int month { };
    int year { };
};

//passed by reference because not want to copy struct which can be large.
//To create this kind of function makes sense when we want to print out struct in a specific way.  
void print(const dateStruct &date) { 
    cout << date.day << '.' << date.month << '.' << date.year << endl;
}

int main() {
    //in C++11, struct can be initialised as
    dateStruct today {26, 2, 2021};
    print(today);
}