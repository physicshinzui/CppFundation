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

void HMC(int n_steps, double d_tau)
{
    std::default_random_engine generator;
    std::normal_distribution<double>  normal_dist(0.0, 1.0);

    // Initialisation at tau = 0
    double x_tau {1.0};
    double x_eq {0.0};
    double p_tau {normal_dist(generator)};
    double a_tau {spring_force(x_tau, x_eq)}; 
    double PE {E_harmonic(x_tau, x_eq)};
    double KE {kinetic_energy(p_tau)};
    double H_init {PE + KE}; 
    
    std::ofstream trajfile; 
    trajfile.open("traj.dat");

    std::srand(10);
    for (int i {0}; i < n_steps; ++i)
    {
        double p_tau_half = p_tau + 0.5 * a_tau * d_tau;
        double x_suc = x_tau + p_tau_half * d_tau;
        double a_suc = spring_force(x_suc, x_eq);
        double p_suc = p_tau_half + 0.5 * a_suc * d_tau;
        double H_fin = E_harmonic(x_suc, x_eq) + kinetic_energy(p_suc);
        double r = static_cast<double>(std::rand()) / RAND_MAX;
        if (r < exp(H_init - H_fin) ) 
        {
            x_tau = x_suc;
            p_tau = p_suc;
        }
        trajfile << x_tau << ' ' << p_tau << '\n';
    }
    trajfile.close();
}

int main()
{
    double d_tau {0.1};
    int n{10000};
    HMC(n, d_tau);
}