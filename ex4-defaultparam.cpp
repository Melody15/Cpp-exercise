#include <iostream>
using namespace std;

void fun(int a = 1, int b = 2, int c = 3){
    cout << a << " " << b << " " << c << endl;
}

int main(int argc, char const *argv[]){
    fun();
    fun(10);
    fun(10, 20);
    fun(10, 20, 30);
    
    return 0;
}