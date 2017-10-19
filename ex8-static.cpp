#include <iostream>
#include <string.h>
using namespace std;

class carnivore{
public:
    static int counter;
};

int carnivore::counter = 0;

class felid: private carnivore{
public:
    felid() {++carnivore::counter;}
};

class tiger: public felid{
public:
    tiger(){
        //cout << carnivore::counter; //error counter is felid's private member
    }
};

int main(int argc, char const *argv[]){
    felid f;
    cout << carnivore::counter << " object(s)" << endl;
    
    return 0;
}
