#include <iostream> 
#include <fstream> 
#include <random>

double spring_force(double x, double x_eq, double k = 1.0)
{
    return - k * (x - x_eq); 
}

double E_harmonic(double x, double x_eq, double k_spring = 1.0)
{
    return 0.5 * k_spring * (x - x_eq) * (x - x_eq);
}

double kinetic_energy(double p_tau)
{
    return 0.5 * p_tau * p_tau;
}

int main()
{
    
}