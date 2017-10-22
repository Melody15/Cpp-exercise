#include <iostream>
#include <string>
using namespace std;

class felid{
public:
    string what() const { return "felid"; }
};

class tiger: public felid{
public:
    string what() const { return "tiger"; }
};

class cat: public felid{
public:
    string what() const { return "cat"; }
};

int main(int argc, char const *argv[]){
    tiger t;
    cat c;
    felid *fs[] = {&t, &c};
    for (int i = 0; i < 2; i++){
        cout << fs[i]->what() << endl;
    }
    return 0;
}
