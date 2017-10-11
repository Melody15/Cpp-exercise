#include <iostream>
using namespace std;

class complex{
private:
    double real, imag;

public:
    complex(double r = 0, double i = 0):real(r), imag(i){}
    
    friend ostream& operator << (ostream& os, const complex& c);
    friend istream& operator >> (istream& is, complex& c);

};

ostream& operator << (ostream& os, const complex& c){
    os << '(' << c.real << ',' << c.imag << ')';
    return os;
}

istream& operator >> (istream& is, complex& c){
    is >> c.real >> c.imag;
    return is;
}

int main(int argc, char const *argv[]){
    complex a;

    cin >> a;
    cout << a << endl;
    
    return 0;
}