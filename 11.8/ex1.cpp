#include <iostream> 
using namespace std;

//overlapping and delegating constructors? 
//overlapping means constructors contain redundancy in these. 
// for example? 

class Foo {
private:

public: 
    Foo() : Foo{1} {
        cout << "code to do A" << endl;
    }

    // Foo(int val) {
    //     cout << "code to do A" << endl;        
    //     cout << "code to do B" << endl;
    // }

    Foo(int val) : Foo() {
        cout << "code to do B" << endl;
    }

};

int main() {
    //Foo hoge1{};    
    Foo hoge2{1};

}