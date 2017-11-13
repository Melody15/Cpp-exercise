#include <iostream>

namespace funSpace{
    int f() { return 100; }
}

int f() { return 0; }

int main(int argc, char const *argv[]){
    std::cout << f() << std::endl;
    using funSpace::f;
    std::cout << f() << std::endl;
    std::cout << ::f() << std::endl;
    return 0;
}
