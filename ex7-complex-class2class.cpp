#include <iostream>
#include <cmath>
using namespace std;

class complexa; //forwarding
class complex{
private:
    double real, imag;

public:
    complex(double r = 0, double i = 0):real(r), imag(i){}
    operator class complexa();
    friend ostream& operator << (ostream& os, const complex& c);
};

class complexa{
private:
    double r, a;

public:
    complexa(double rr = 0.0, double aa = 0.0):r(rr), a(aa){}

    operator complex(){
        return complex(r*cos(a), r*sin(a));
    }
    friend ostream& operator << (ostream& os, const complexa& c);
    
};

complex::operator complexa(){
    return complexa(sqrt(real*real+imag*imag), atan2(imag, real));
}

ostream& operator << (ostream& os, const complex& c){
    os << '(' << c.real << ',' << c.imag << ')';
    return os;
}

ostream& operator << (ostream& os, const complexa& c){
	return os << c.r << "Ei" << c.a;
}

int main(int argc, char const *argv[]){
    complex a(3.0, -4.0);
    complexa b;
    b = a;
    cout << a << endl << b << endl;
    complex c;
    c = b;
    cout << c << endl;
    return 0;
}
