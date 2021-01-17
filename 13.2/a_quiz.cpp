#include <iostream>
using namespace std;

class Fraction {
    private:
        int _numer;
        int _denomi;
    public:
        Fraction(int numer, int denomi);
        void print() const;
};

Fraction::Fraction(int numer, int denomi) {
     _numer  = numer;
     _denomi = denomi;
}

void Fraction::print() const {
    //_numer = 10; LOOK! If this is done, an error raises because of 'const' 
    cout << _numer << '/' << _denomi << endl;

}

int main()
{
    Fraction f1{ 1, 4 };
    f1.print();
 
    Fraction f2{ 1, 2 };
    f2.print();
 
    return 0;
}