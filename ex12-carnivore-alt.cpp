#include <iostream>
using namespace std;

class carnivore{
protected:
    string name;
    string _habitat;
public:
    carnivore(string n, string h): name(n), _habitat(h){}
    virtual void habitat() const = 0;
};

class felid: public carnivore{
public:
    felid(string n = "felid", string h = "Global"): carnivore(n, h){}
    void habitat() const { cout << name << ": " << _habitat << endl; } 
};

class tiger: public felid{
public:
    tiger(string n = "tiger", string h = "Asia"): felid(n, h){}
};

class lion: public felid{
public:
    lion(string n = "lion", string h = "Africa"): felid(n, h){}
};

int main(int argc, char const *argv[]){
    tiger t;
    t.habitat();
    return 0;
}
