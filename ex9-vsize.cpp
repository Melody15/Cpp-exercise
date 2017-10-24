#include <iostream>
#include <string.h>
using namespace std;

class aClassWithNoVirtual{
protected:
    int a;
public:
    void f() {}
};

class aClassWithOneVirtual{
protected:
    int a;
public:
    virtual void f() {}
};

class aClassWithTwoVirtual{
protected:
    int a;
public:
    virtual void f() {}
    virtual int g() { return 0; }
};

int main(int argc, char const *argv[]){
    cout << "size of aClassWithNoVirtual: " << sizeof(aClassWithNoVirtual) << endl;
    cout << "size of aClassWithOneVirtual: " << sizeof(aClassWithOneVirtual) << endl;
    cout << "size of aClassWithTwoVirtual: " << sizeof(aClassWithTwoVirtual) << endl;
    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of pointer: " << sizeof(void *) << endl;
    
    return 0;
}
