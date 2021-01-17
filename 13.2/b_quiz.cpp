#include <iostream>
using namespace std;

class Fraction {
    private:
        int _numer  = 0;
        int _denomi = 1;
    public:
        Fraction(int numer, int denomi);
        void print() const;
        friend Fraction operator*(const Fraction &c1, const Fraction &c2);
        friend Fraction operator*(const Fraction &c1, int value);
        friend Fraction operator*(int value, const Fraction &c1);
        
};

Fraction::Fraction(int numer, int denomi) {
     _numer  = numer;
     _denomi = denomi;
}

void Fraction::print() const {
    //_numer = 10; LOOK! If this is done, an error raises because of 'const' 
    cout << _numer << '/' << _denomi << endl;
}

// Sat 09.01.2021 10:46
// Q. What does {} mean? what data type returns here? Array? or Fraction{c1._numer * c2._numer, c1._denomi * c2._denomi}? 
Fraction operator*(const Fraction &c1, const Fraction &c2) {
    return {c1._numer * c2._numer, c1._denomi * c2._denomi};
}

Fraction operator*(const Fraction &c1, int value) {
    return {c1._numer * value, c1._denomi};
}

Fraction operator*(int value, const Fraction &c1) {
    return {c1._numer * value, c1._denomi};
}


int main() {
    Fraction f1{2, 5};
    f1.print();
 
    Fraction f2{3, 8};
    f2.print();
 
    Fraction f3{ f1 * f2 }; // becomes f3{numer, denomi}
    f3.print();
    
    // operator* returns the class Fraction which is initialised by {f1._numer * f2._numer, f1._denomi * f2._denomi}
    (f1 * f2).print(); 
    // ^initialised Fraction class.

    Fraction f4{ f1 * 2 };
    f4.print();
 
    Fraction f5{ 2 * f2 };
    f5.print();
 
    Fraction f6{ Fraction{1, 2} * Fraction{2, 3} * Fraction{3, 4} };
    f6.print();
 
    return 0;
}