#include <iostream>
using namespace std;

class complex{
private:
    double real, imag;

public:
    complex(double r = 0, double i = 0):real(r), imag(i){}

    complex& operator ++ (){
        ++real;++imag;
        return *this;
    }

    complex operator ++ (int){
        complex temp(this->real, this->imag);
        ++real;++imag;
        return temp;
    }

    void print(){
        cout << '(' << real << ',' << imag << ')' << endl;
    }

};

int main(int argc, char const *argv[]){
    complex a(1.0, -2.0), b;
    a.print();
    b.print();
    b = ++a;
    cout << "b = ++a" << endl;
    a.print();
    b.print();
    b = a++;
    cout << "b = a++" << endl;
    a.print();
    b.print();
    return 0;
}
