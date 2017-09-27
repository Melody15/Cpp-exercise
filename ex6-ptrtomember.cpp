#include <iostream>
using namespace std;

class Y{
private:
    int a;

public:
    int b;
    float c;

    int f() { return 0; }
    int g() { return 1; }
    int h(int) { return 2; }

};

int main(int argc, char const *argv[]){
    int(Y::*ptr);
    int(Y::*fptr)();

    Y Obj;
    ptr = &Y::b;
    Obj.*ptr = 2;
    cout << ++(Obj.*ptr) << endl;

    fptr = &Y::f;
    cout << (Obj.*fptr)() << endl;

    Y *pObj = &Obj;
    fptr = &Y::g;
    cout << (pObj->*fptr)() << endl;
    
    return 0;
}
