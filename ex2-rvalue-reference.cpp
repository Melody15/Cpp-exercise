#include <iostream>
using namespace std;

int f() {int x = 3; return x;}

int main(int argc, char const *argv[]){
    int a = 0;
    int && rra = move(a);
    int&& rrb = f();

    ++rra;
    cout <<"a="<<a<<','<<"rra="<<rra<<endl;

    return 0;
}
