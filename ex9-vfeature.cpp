#include <iostream>
#include <string>
using namespace std;

class felid{
public:
    virtual string what() const { return "felid"; }
};

class tiger: public felid{
public:
    string what(int) const { return "tiger"; }
};

class bengalTiger: public tiger{
public:
    string what() const { return "bengal tiger"; }
};

int main(int argc, char const *argv[]){
    tiger t;
    felid& rt = t;
    cout << rt.what() << endl;
    //cout << rt.what(0) << endl; //error
    cout << t.what(0) << endl;
    bengalTiger tb;
    felid& rtb = tb;
    cout << rtb.what() << endl;
    return 0;
}
