#include <iostream>
#include <string.h>
using namespace std;

class felid{
public:
    virtual string what() const = 0;
    virtual ~felid() {}
};

class tiger: public felid{
public:
    string what() const { return "tiger"; }
    ~tiger() {}
};

felid *getTiger() { return new tiger; }

void roar(const felid& f){
    cout << "a " << f.what() << "'s roaring" << endl;
}

int main(int argc, char const *argv[]){
    felid *p = getTiger();
    roar(*p);
    delete p;
    
    return 0;
}