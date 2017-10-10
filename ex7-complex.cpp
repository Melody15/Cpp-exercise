#include <iostream>
using namespace std;

class complex{
private:
    double real, imag;

public:
    complex(double r = 0, double i = 0):real(r), imag(i){}
    complex(const complex& c):real(c.real), imag(c.imag){}

    complex& operator += (const complex& c){
        real += c.real;
        imag += c.imag;
        return *this;
    }

    void print(){
        cout << '(' << real << ',' << imag << ')' << endl;
    }

    friend complex operator + (const complex& c1, const complex &c2);
};

complex operator + (const complex& c1, const complex &c2){
    return complex(c1.real+c2.real, c1.imag+c2.imag);
}

int main(int argc, char const *argv[]){
    complex c1(1, 2), c2(3, 4), c3(5, 6);
    (c1 += c2).print();
    (c2 + c3).print();
    return 0;
}
