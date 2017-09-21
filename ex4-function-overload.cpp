#include <iostream>
using namespace std;

int f() { return 0; }
int f(int i) { return i; }
int f(int& i){ return i; }

int main(int argc, char const *argv[]){
    int a = 2;
    cout << f() << endl;
    cout << f(1) << endl;
    //cout << f(a) << endl;  [Error] call of overloaded 'f(int&)' is ambiguous
    //candidates are: int f(int) int f(int&)
    return 0;
}
