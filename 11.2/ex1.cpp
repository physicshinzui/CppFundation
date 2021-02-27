#include <iostream> 
using namespace std;

struct DateStruct {
    int day { };
    int month { };
    int year { };
};

class DateClass {
    public: // <- class members are by default in private. If we wanna access these, we must put public. 
        int m_day{};
        int m_month{};
        int m_year{};

        void print() {
            cout << m_day << '.' << m_month << '.' << m_year << endl;
        };
}; //<- don't forget to add a semicolon. 

//passed by reference because not want to copy struct which can be large.
//To create this kind of function makes sense when we want to print out struct in a specific way.  
void print(const DateStruct &date) { 
    cout << date.day << '.' << date.month << '.' << date.year << endl;
}

void printClass(const DateClass &date) {
    cout << date.m_day << '.' << date.m_month << '.' << date.m_year << endl;
}

int main() {
    //in C++11, struct can be initialised as
    DateStruct today {26, 2, 2021};
    print(today);

    DateClass yesterday {25, 2, 2021};
    printClass(yesterday);
    //Rather than this, the following is better.  
    yesterday.print();
}