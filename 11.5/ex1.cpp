#include <iostream> 
#include <cassert>

class Fraction {
    private:
        int _numerator;
        int _denominator;

    public:
    //The two constructors can coexist due to function overloading.
        //Default constructor
        Fraction() {
            _numerator = 1; 
            _denominator = 2;
        }
        //Constructor with two parameters; one optional value
        Fraction(int nume, int denom = 1) {
            assert(denom != 0);
            _numerator = nume; 
            _denominator = denom;
        }        
        int getNumerator()   {return _numerator;}
        int getDenominator() {return _denominator;}
        double getValue() {return (double)_numerator / _denominator;}

};

int main() {
    Fraction Frac;      //default constructor is called
    std::cout << Frac.getNumerator() << '/' << Frac.getDenominator() << '=' << Frac.getValue() << std::endl;
    Fraction Frac2{1,3};//Constructor with two parameters is called
    std::cout << Frac2.getNumerator() << '/' << Frac2.getDenominator() << '=' << Frac2.getValue() << std::endl;
    Fraction Frac3{ 10 };
    std::cout << Frac3.getNumerator() << '/' << Frac3.getDenominator() << '=' << Frac3.getValue() << std::endl;

}