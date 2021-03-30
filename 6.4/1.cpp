#include <iostream>
#include "2.h"
using namespace std;

int g_var{10};

void addoneToGlobal() {
    cout << "In function: " <<  g_var << endl;
    ++g_var;
}

int main() {
    cout << "In main: " << g_var << endl;
    addoneToGlobal();
    cout << "After calling the function: " << g_var << endl;

    cout << "Global var outside : " << g_out << endl;
}