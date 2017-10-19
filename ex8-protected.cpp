#include <iostream>
using namespace std;

class carnivore{
protected:
    string name;
public:
    carnivore(string n = "carnivore") { name = n; }
    void prey() { cout << name << "preys" << endl; }
    string what() const { return name; }
};

class felid: public carnivore{
protected:
    bool slitPupil;
public:
    felid(string n = "felid", bool s = false) { name = n; slitPupil = s; }
    
};

class tiger: protected felid{
public:
    tiger(string n = "tiger", bool s = false) { name = n; slitPupil = s; }
    void roar(){ cout << name << " roars" << endl; }
};

int main(int argc, char const *argv[]){
    tiger t;
    t.roar();
    return 0;
}
