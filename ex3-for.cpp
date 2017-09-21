#include <iostream>
using namespace std;

//calculate the first 10 Fibonacci items
int main(int argc, char const *argv[]){
    int f1 = 1, f2 = 1, f3;

    cout << f1 << ' ' << f2 << ' ';
    for (int i = 3; i <= 10; i++){
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
        cout << f3 << ' ';
    }

    return 0;
}