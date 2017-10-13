#include <iostream>
#include <cmath>
using namespace std;

class complex{
private:
    double real, imag;

public:
    complex(double r = 0, double i = 0):real(r), imag(i){}
    operator double() { return sqrt(real*real + imag*imag); }

    friend ostream& operator << (ostream& os, const complex& c);
};

ostream& operator << (ostream& os, const complex& c){
    os << '(' << c.real << ',' << c.imag << ')';
    return os;
}

int main(int argc, char const *argv[]){
    complex a(3.0, -4.0);
    cout << a << endl;
    double mod = a;
    cout << mod << endl;
    return 0;
}