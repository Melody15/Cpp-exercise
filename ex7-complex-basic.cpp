#include <iostream>
using namespace std;

class complex{
private:
    double real, imag;

public:
    complex(double r = 0, double i = 0):real(r), imag(i){}
    complex(const complex& c):real(c.real), imag(c.imag){}

    friend void addassign(complex& c1, const complex &c2);
    friend void print(const complex& c);    
};

void addassign(complex&c1, const complex &c2){
    c1.real += c2.real;
    c1.imag += c2.imag;
}

void print(const complex& c){
    cout << '(' << c.real << ',' << c.imag << ')' << endl;
}

int main(int argc, char const *argv[]){
    complex c1(1, 2), c2(3, 4);
    addassign(c1, c2);
    print(c1);
    return 0;
}
