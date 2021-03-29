#include <iostream> 
using namespace std;

void printAndIncrement() {
    int num{1};
    ++num;
    cout << num << endl;    
}

void printAndIncrement2() {
    static int num{1};
    ++num;
    cout << num << endl;    
}

int generateID() {
    static int id{0};
    ++id;
    return id;
}

int main() {
    cout << "---Increment (default automatic duration is applied)---" << endl;
    printAndIncrement();
    printAndIncrement();
    printAndIncrement();
    
    cout << "---Increment with static keyword (static duration is applied)---" << endl;
    printAndIncrement2();
    printAndIncrement2();
    printAndIncrement2();
    
    cout << "---ID generation (implemented by the use of static local variable)---" << endl;
    int id1 = generateID();
    int id2 = generateID();
    cout << "id1 = " << id1 << ", id2 = " << id2 << endl;

    //Try to tamper with static local variables
    //It's impossible in this main function, because "static int id" is a local variable in the function generateID().
    //That is, "id" is undefined in the main function, and hence the following line gives rise to the error:
    //cout << id << endl;
    
}