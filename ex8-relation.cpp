#include <iostream>
using namespace std;

class carnivore{
protected:
    string name;
public:
    carnivore(string n = "carnivore"): name(n){}
    string what() const { return name; }
};

class felid: public carnivore{
protected:
    bool slitPupil;
public:
    felid(string n = "felid", int w = 5, int h = 5):carnivore(n){}
};

void what(string name){
    cout << name << endl;
}

int main(int argc, char const *argv[]){
    cout << "---assignment test" << endl;
    carnivore c("c1");
    felid f1("f1");
    what(c.what());
    what(f1.what());
    c = f1;
    what(c.what());
    what(f1.what());
    cout << "---reference test" << endl;
    felid f2("f2");
    carnivore &cr = f2;
    what(cr.what());
    cout << "---pointer test" << endl;
    felid f3("f3");
    carnivore* cp = &f3;
    what(cp->what());
    return 0;
}
