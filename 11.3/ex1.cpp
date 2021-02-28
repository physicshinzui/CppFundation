#include <iostream> 

class DateClass {
    private:
        int _day;
        int _month;
        int _year;

    public:
        // set private date variables from another place
        void set(int d, int m, int y) {
            _day   = d;
            _month = m;
            _year  = y;
        }

        //print date without having direct access to variables in this class. 
        void print() {
            std::cout << _day << '.' << _month << '.' << _year << std::endl;
        }

};

int main() {
    DateClass date;
    date.set(28, 2, 2021);
    date.print();
}