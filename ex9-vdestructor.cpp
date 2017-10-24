#include <iostream>
#include <string>
using namespace std;

class felid{
public:
    felid() { cout << "felid" << endl; }
    virtual ~felid() { cout << "~felid" << endl; }
};

class tiger: public felid{
public:
    tiger() { cout << "tiger" << endl; }
    ~tiger() { cout << "~tiger" << endl; }
};

int main(int argc, char const *argv[]){
    felid *p = new tiger;
    delete p;
    return 0;
}
