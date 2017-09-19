#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int a = 0;
    int& ra = a;
    cout <<"a="<<a<<','<<"ra="<<ra<<endl;
    ++ra;
    cout <<"a="<<a<<','<<"ra="<<ra<<endl;
    int b = 3;
    ra = b; //这不是引用绑定 而是赋值
    cout <<"a="<<a<<','<<"b="<<b<<','<<"ra="<<ra<<endl;
    
    return 0;
}