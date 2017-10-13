#include <iostream>
#include <functional>
using namespace std;

int f() { return 0; }

class X{
    int x;

public:
    X(int y):x(y){}
    int operator () (){ return ++x; }
    
};

int g(function <int()> pred){
    cout << pred() << endl;
}

int main(int argc, char const *argv[]){
    int a = 2;
    auto b = [&a](){ return --a; };

    g(f);
    g(b);
    g(X(a));
    
    return 0;
}