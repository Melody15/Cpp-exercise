#include <iostream>

namespace outer{
    int i = 0;

    namespace nested{
        int i = 100;
        int j = i;
    }
}

int main(int argc, char const *argv[]){
    std::cout << outer::nested::j << std::endl;
    return 0;
}
