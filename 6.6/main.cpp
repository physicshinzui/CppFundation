#include <iostream> 
using namespace std;

extern constexpr int g_x;

int main() {
    cout << g_x << endl;
    return 0;
}