#include <iostream> 
#include <vector> 

class Fraction {
    private:
        int _numerator;
        int _denominator;

    public:
        //Default constructor
        Fraction() {
            _numerator = 1; 
            _denominator = 2;
        }
        //Constructor with two parameters
        Fraction(int nume, int denom) {
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
}