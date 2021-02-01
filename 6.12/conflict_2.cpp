#include <iostream>

namespace a {
    int x{10};
}

namespace b {
    int x{1};
}

int main() {
    using namespace a;
    using namespace b;
    std::cout << x << std::endl;
}