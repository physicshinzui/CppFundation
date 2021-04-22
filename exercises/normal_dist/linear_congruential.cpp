#include <random> 
#include <iostream> 

int main()
{
    // A random number engine class that generates pseudo-random numbers.
    // Note: linear congruential engine is utilised. This is portable, but can lead to 
    // See https://www.cplusplus.com/reference/random/default_random_engine/
    std::default_random_engine generator;
    generator.seed(10);

    //Random number distribution that produces floating-point values according to a normal distribution
    //See https://www.cplusplus.com/reference/random/normal_distribution/
    double mu {0.0}; //mean
    double sigma {1.0};// standard deviation     
    std::normal_distribution<double> distrib(mu, sigma);

    for (int i{0}; i < 100000; ++i) 
    {
 	    double r = distrib(generator);
 	    std::cout << r << std::endl;
    }
}