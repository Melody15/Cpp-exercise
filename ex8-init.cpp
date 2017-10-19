#include <iostream>
using namespace std;

class guest{
public:
    guest(){ cout << "guest" << endl; }
    ~guest(){ cout << "~guest" << endl; }
};

class parent{
public:
    int i;
    parent(int j):i(j){ cout << "parent" << endl; }
    ~parent(){cout << "~parent" << endl; }
};

class child: public parent{
public:
    guest g;

    child(int j):parent(j){ cout << "child" << endl; }
    ~child(){ cout << "~child" << endl; }
};

int main(int argc, char const *argv[]){
    child d(10);
    return 0;
}