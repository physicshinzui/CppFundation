#include <iostream> 
#include <string> 

namespace a {
    int x {10};
    std::string s {"namespace a"};
}

int main () {
    using std::cout;
    using std::endl;
    cout << a::x << endl;
    cout << a::s << endl;
}