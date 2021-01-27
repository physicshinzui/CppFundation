#include <iostream> 

int main() {
    goto skip;   // (1)
    int x { 5 }; // (2)
    skip:
        x += 3;      // (3)
        return 0;
}