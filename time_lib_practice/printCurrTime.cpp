#include <iostream>
#include <ctime>
int main() {
    time_t now;  //time_t object
    time (&now); // time() makes a pointer point to the current time value.
    std::cout << std::ctime(&now) << std::endl; // prints the current time.
}