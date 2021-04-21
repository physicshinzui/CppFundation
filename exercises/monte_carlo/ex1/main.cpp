/*
Ex1
Write metropolice algorithm to generate probability distribution of 1D harmonic oscillator
*/
#include <iostream> 
#include <cmath> 
#include <fstream>

double E_harmonic(double x, double x_eq, double k_spring = 1.0)
{
    return 0.5 * k_spring * (x - x_eq) * (x - x_eq);
}

void metropolisHasting(int n_steps, double step_size, double KT, int seed, std::string foutname = "traj.dat")
{
    //Initialisation
    double xi {0.1};
    double x_eq {0.0};
    double dx{};
    int    n_accept {0};

    std::ofstream trajfile;
    trajfile.open(foutname);

    std::srand(seed);
    for (int i{0}; i < n_steps; ++i) 
    {
        dx = static_cast<double>(std::rand()) / RAND_MAX - 0.5; //ranging [-0.5, 0.5]
        dx = 2.0 * step_size * dx;
        double x_suc = xi + dx;
        double E_pre = E_harmonic(xi   , x_eq);        
        double E_suc = E_harmonic(x_suc, x_eq);
        double dE = E_suc - E_pre;

        double r = static_cast<double>(std::rand()) / RAND_MAX; // [0.0, 1.0]

        if (dE <= 0.0 || exp(-dE/KT) >= r)
        {
            trajfile <<  x_suc << ' ' << E_suc  << '\n';
            xi = x_suc;
            ++n_accept;
        }
        else 
        { 
            continue; //Reject
        }
    }
    std::cout << "Accept ratio = " << (double)n_accept / n_steps << std::endl;
    trajfile.close();
}

int main()
{
    int n_steps {1000000};
    double step_size {1.0};
    int seed{10};
    double KT{0.1};
    metropolisHasting(n_steps, step_size, KT, seed);
    return 0;
}