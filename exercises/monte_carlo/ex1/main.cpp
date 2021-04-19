/*
Ex1
Write metropolice algorithm to generate probability distribution of 1D harmonic oscillator
*/
#include <iostream> 
#include <cmath> 

double E_harmonic(double x, double x_eq, double k_spring = 1.0)
{
    return - 0.5 * k_spring * (x - x_eq) * (x - x_eq);
}

void metropolice()
{
    //parameters 
    int n_steps {10};
    double KT {1.0};
    
    //Initialisation
    double xi {1.0};
    double x_eq {0.0};
    double dx{};
    double Q_ave{0.0};
    double E_pre = E_harmonic(xi, x_eq);
    int n_accept {0};

    for (int i{0}; i < n_steps; ++i) {
        dx = static_cast<double>(std::rand()) / RAND_MAX - 0.5; //ranging [-0.5, 0.5]
        //std::cout << "Displacement = " << dx << std::endl;
        double E_pre = E_harmonic(xi, x_eq);
        double x_suc = xi + dx;
        double E_suc = E_harmonic(x_suc, x_eq);
        double dE = E_suc - E_pre;
#ifdef _DBG        
        std::cout << "x+dx = " << dx << "dE = " << dE << std::endl;
#endif
        double r = static_cast<double>(std::rand()) / RAND_MAX; // [0.0, 1.0]
        double prob = exp(-dE/KT);
        if (dE <= 0.0 || prob > r)
        {
            std::cout <<  x_suc << " " << dE << "" << x_suc << std::endl;  
            xi = x_suc;
            Q_ave += prob * xi; 
            std::cout << Q_ave << std::endl;
        }
        else
        {
#ifdef _DBG
            std::cout << "Reject" << std::endl;
#endif
        }
    }
//    Q_ave; 
    std::cout << Q_ave << std::endl;
}

int main()
{
    metropolice();
    return 0;
}