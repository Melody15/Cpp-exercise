#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int a = 1, b = 3;
    auto square = [](int val) {return val * val;};
    auto add3 = [a, b](int extra){return a + b + extra;};

    cout<<square(add3(5))<<endl;
    
    return 0;
}
