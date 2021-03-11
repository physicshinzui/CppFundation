#include <iostream> 
#include <vector> 
using namespace std;

class TestVec {
    private:
        int _n = 3;
        vector<int> _vec;
    public:
        TestVec() : _vec{1,2,3} { };

        void print() { 
            for (int i = 0; i < _vec.size(); ++i) {
                cout << _vec.at(i) << endl;
            }
        }
};

class TestArr {
    private:
        int _n = 3;
        int _array[3];
    public:
        TestArr() : _array{} { };

        void print() { 
            for (int i = 0; i < 3; ++i) {
                cout << _array[i] << endl;
            }
        }
};


class Dog {
    private:
        int _n = 3;
        vector<int> _vec;
    public:
        Dog(){ };

        void print() { 
            for (int i = 0; i < _vec.size(); ++i) {
                cout << _vec.at(i) << endl;
            }
        }
};

int main() {
    // TestVec tv;
    // tv.print();
    TestArr ta;
    ta.print();
}