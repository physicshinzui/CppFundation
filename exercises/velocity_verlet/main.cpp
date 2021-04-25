#include <iostream> 
#include <cmath> 
#include <vector> 

class Harmonic
{
    private:

    public:
        double potential(double x, double x_eq, double k) 
        {
            return 0.5 * k * (x - x_eq) * (x - x_eq);
        } 

        double force(double x, double x_eq, double k)
        {
            return - k * (x - x_eq);
        }

};

int main() 
{
    std::vector<double> vec(); //empty vector

    double start {-1.0};
    double end {1.0};
    double x {start};
    Harmonic H;
    while (x < end)
    {
        std::cout << x << " " << H.potential(x, 0.0, 1.0) << " " << H.force(x, 0.0, 1.0) << std::endl;
        x = x + 0.01;
    }
        
}