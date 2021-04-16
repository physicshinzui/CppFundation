#include <iostream> 
#include <iomanip>   
using namespace std;

int main()
{
    // loss of info
    cout << "~ Loss of information ~ " << endl;
    double x {1000000000};
    double y {0.000000001};
    double z {x + y};
    cout << fixed << setprecision(16);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << "How to avoid: adding from smaller numbers." << endl;

    cout << "\n~ Cancellation of significant digits (can accumulate error) ~ "  << endl;
    float a {0.123456789}; //float: ~8 digits; double: ~16 digits
    float b {0.123456788};
    float c {a - b};
    printf("a = %.9lf  \n", a);
    printf("b = %.9lf \n", b);
    printf("a - b  = %.9lf \n", c);
    cout << "How to avoid: (i) not use substraction. (2) make the result larger." << endl; 

}