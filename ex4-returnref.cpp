#include <iostream>
using namespace std;

int& getVar(int *p){ return *p; }

int main(int argc, char const *argv[]){
    int a = 10, b;

    b = getVar(&a) * 12;
    getVar(&a) = 200;
    //调用getVar(&a)一次相当于生成一个a的引用
    cout << a << " " << b << endl;

    return 0;
}