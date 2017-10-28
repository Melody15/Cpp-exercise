#include <iostream>
#include <cmath>
//using namespace std; //compile error

class complex{
private:
    double real, imag;
public:
    complex(double r, double i):real(r), imag(i){}
    operator double() const { return sqrt(real*real + imag*imag); }
};

template <typename T>
bool greater(const T& a, const T& b){
    return a > b;
}

int main(int argc, char const *argv[]){
    int a = 1, b = 2;
    double c = 4.0, d = -1.0;
    complex e(3,4), f(5,6);

    std::cout << greater(a,b) << std::endl;
    std::cout << greater(c,d) << std::endl;
    std::cout << greater(e,f) << std::endl;
    std::cout << greater("abc", "ABC") << std::endl;

    return 0;
}
